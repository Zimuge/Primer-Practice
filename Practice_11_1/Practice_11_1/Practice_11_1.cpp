// Practice_11_1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

#include <string>

#include <map>
#include <set>

#include <algorithm>
#include <functional>



using namespace std;
using namespace std::placeholders;

void pra_11_3();
void pra_11_4();
string & trans(string  &str);

int _tmain(int argc, _TCHAR* argv[])
{
	
	//pra_11_3();
	pra_11_4();
	return 0;
}

void pra_11_3()
{
	map<string, unsigned int> words;
	set<string> execlude;

	string word;
	cout << "please input the string" << endl;
	while (cin >> word)
	{
		++words[word];
	}

	for (const auto &w : words)
	{
		cout << w.first << ":occours " << w.second << ", ";
	}

	cout << endl;
}

string & trans(string &str)
{
	string::iterator iter = str.begin();
	while (iter != str.end())
	{
		if ((*iter <= 'Z') && (*iter >= 'A'))
		{
			*iter -= ('A' - 'a');
			++iter;
		}
		else if ((*iter == ',' ) || (*iter == '.'))
		{
			iter = str.erase(iter);
		}
		else
		{
			++iter;
		}
	}
	return str;
}
void pra_11_4()
{
	map<string, unsigned int> words;
	set<string> execlude;

	string word;
	cout << "please input the string" << endl;
	while (cin >> word)
	{
		++words[trans(word)];
	}

	for (const auto &w : words)
	{
		cout << w.first << " occours" << w.second << " ";
	}

	cout << endl;
}