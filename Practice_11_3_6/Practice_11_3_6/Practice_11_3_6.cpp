// Practice_11_3_6.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <iostream>
#include <fstream>
#include <sstream>

#include <vector>
#include <string>

#include <map>
#include <unordered_map>
#include <set>

#include <utility>

#include <algorithm>
#include <functional>

using namespace std;

void pra_11_33();
unsigned int hasher(const string & str);

//unsigned int hasher(string & str);

map<string, string> rule(ifstream & input);

string trans_string(string & word, map<string, string> & rule);
int Value()
{
	static int a = 0;
	a += 1;
	return a;
}

int _tmain(int argc, _TCHAR* argv[])
{
	//pra_11_33();
	/*unordered_map<string, string, decltype(hasher)* > un_m(11,hasher);
	multimap<string, string> m;
	unordered_multimap<string, int> u_mm;

	un_m.insert({ "hello", "tp" });
	un_m.insert({ "ab", "cd" });
	
	unordered_map<string, string>::iterator it;
	for (it = un_m.begin(); it != un_m.end(); ++it)
	{
		cout << it->first << " " << it->second << endl;
	}
	*/
	int size, j, i, k, t;
	cout << "请输入大小" << endl;
	cin >> size;
	int *Arr = new int[size*size];
	if (size % 2 == 0)
		k = size / 2;
	else
		k = (size + 1) / 2;
	for (t = 1; t <= k; t++)//第几圈。
	{
		for (i = 1; i <= 4; i++)//第几次。
		{
			if (i == 1)//横排顺序赋值
			{
				for (j = 0; j<(size - 2 * (t - 1)); j++)
					*(Arr + size*(t - 1) + (t - 1) + j) = Value();
				if (((size % 2) == 1) && (t == k))break;
			}
			if (i == 2)//竖排顺序赋值
			{
				for (j = size; j<size*(size - 2 * (t - 1)); j += size)
					*(Arr + size*(t)-t + j) = Value();
			}
			if (i == 3)//横排逆序赋值
			{
				for (j = 1; j<(size - 2 * (t - 1)); j++)
					*(Arr + size*(t)-t + size*(size - 2 * (t - 1) - 1) - j) = Value();
			}
			if (i == 4)//竖排逆序赋值
			{
				for (j = size; j< size*(size - 2 * (t - 1) - 1); j += size)
					*(Arr + size*(t)-t + size*(size - 2 * (t - 1) - 1) - (size - 2 * (t - 1) - 1) - j) = Value();
			}
		}
	}

	for (i = 0; i<size*size; i += size)
	{
		for (j = 0; j<size; j++)
			cout << *(Arr + j + i) << '\t';
		cout << endl;

	}
	return 0;
}

void pra_11_33()
{
	map<string, string> m;
	ifstream input("rule.txt");
	ifstream input1("sentence.txt");
	string line,word;
	if (input)
	{
		 m = rule(input);
		 while (getline(input1,line))
		 {
			 istringstream in(line);
			 while (in >> word)
			 {
				 cout << trans_string(word, m) << " ";
			 }
			 cout << endl;
		 }
		
	}
	else
	{
		cout << "can't open file" << endl;
	}
}

map<string, string> rule(ifstream & input)
{
	map<string, string> m;
	string word, whole_word;
	while (input >> word && getline(input, whole_word))
	{
		if (whole_word.size() >= 1)
		{
			m[word] = whole_word.substr(1);
		}	
	}

	return m;
}

string trans_string(string & word, map<string, string> & rule)
{
	map<string,string>::iterator iter = rule.find(word);

	if (iter != rule.end())
	{
		return iter->second;
	}
	else
	{
		return word;
	}
}

unsigned int hasher(const string & str)
{
	return str.length();
}