// Practice-9.5.3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

void pra_9_47(string str,string number,string letter);
void pra_9_49(void);

int _tmain(int argc, _TCHAR* argv[])
{
	string str = "ab2c3d7r4e5 ", number = "0123456789 ";
	string letter = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	

	pra_9_47(str,number,letter);
	pra_9_49();

	return 0;
}

void pra_9_47(string str, string number, string letter)
{
	string str2, str3;
	string::size_type  pos = 0;
	while ((pos = str.find_first_of(number, pos)) != string::npos)
	{
		str2.push_back(str[pos]);
		pos++;

	}

	cout << str2 << endl;

	pos = 0;
	while ((pos = str.find_first_not_of(number, pos)) != string::npos)
	{
		str3.push_back(str[pos]);
		pos++;
	}

	cout << str3 << endl;
}

void pra_9_49(void)
{
	string temp;
	vector<string> vec_str;
	string::size_type max_size = 0;
	string ascender = "bdghijkltABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string dscender = "gjpq";
	ifstream input("data.txt");
	if (input)
	{
		while (input >> temp)
		{
			if ((temp.find_first_of(ascender) == string::npos) && (temp.find_first_of(dscender) == string::npos))
			{
				if (max_size < temp.size())
				{
					vec_str.clear();
					vec_str.push_back(temp);
					max_size = temp.size();
				}
				else if (max_size == temp.size())
				{
					vec_str.push_back(temp);
				}
				else;
			}
		}
		 
		vector<string>::iterator  begin = vec_str.begin(), end = vec_str.end();
		while (begin != end)
		{
			cout << *begin << " ";
			++begin;
		}
	}
	else
	{
		cout << "can't open the file" << endl;
	}

}