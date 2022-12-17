#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void CreateTXT(char* fname)
{
	ofstream fout(fname);
	char ch;
	string s;
	do
	{
		cin.get();
		cin.sync();
		cout << "enter line: "; getline(cin, s);
		fout << s << endl;
		cout << "continue? (y/n): "; cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	cout << endl;
}
void PrintTXT(char* fname)
{
	ifstream fin(fname);
	string s;
	while (getline(fin, s))
	{
		cout << s << endl;
	}
	cout << endl;
}
void Calc(char* fname, int &k, int &j, int &o)
{
	ifstream fin(fname);
	string s;
	k = 0;
	char z;
	j = 0;
	o = 0;
	cout << "Find : "; cin >> z;
	while (getline(fin, s))
	{
		for (unsigned i = 0; i < s.length(); i++)
		{
			if (s[0] == z && s[i + 1] != '_')
			{
				k=1;
			}
			else if (s[0] == s[s.length()])
			{
				j++;
			}
			else if (s[i] == '_')
			{
				o++;
			}
		}
	}
	
}
int main()
{
	char fname[100];
	cout << "enter file name 1: "; cin >> fname;
	CreateTXT(fname);
	PrintTXT(fname);
	int k = 0;
	int j = 0;
	int o = 0;
	Calc(fname, k, j, o);
	cout << "Number of entered = "<< k  << endl;
	cout << "Number of starting end ending with same = " << j + 1 << endl;
	cout << "Number of emty = " << o << endl;
	char gname[100]; // ім'я другого файлу
	cout << "enter file name 2: "; cin >> gname;
	PrintTXT(gname);
	return 0;
}
