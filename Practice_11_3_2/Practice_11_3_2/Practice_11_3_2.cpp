// Practice_11_3_2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <iostream>
#include <fstream>

#include <vector>
#include <string>

#include <map>
#include <set>

#include <utility>

#include <algorithm>
#include <functional>

using namespace std;


void pra_11_20();
void pra_11_21();
int _tmain(int argc, _TCHAR* argv[])
{
	pra_11_20();
	vector<int> v;
	v[0] = 1;
	return 0;
}

void pra_11_20()
{
	map <string, size_t> words_count;
	string word;
	ifstream in("words.txt");
	if (!in)
	{
		cout << "can't open file" << endl;
	}
	else
	{
		while (in >> word)
		{
			pair< map<string, size_t>::iterator, bool> ret_pair = words_count.insert(make_pair(word, 1));//words.insert({ word, 1 });
			if (!ret_pair.second)
			{
				//((*ret_pair.first).second)++;
				ret_pair.first->second++;
			}
		}
	}

	map<string, size_t>::iterator iter = words_count.begin();
	while (iter != words_count.end())
	{
		cout << iter->first << " appears " << iter->second << ((iter->second) > 1 ? " times" : " time") << endl;
		++iter;
	}
}

void pra_11_21()
{
	map<string, vector<int>> m;
	vector<int> vec_int;
	pair< map<string, vector<int>>::iterator, bool> p = m.insert({ "tao", vec_int });

}