// Practice_11_2_2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <sstream>

#include <vector>
#include <string>
#include <list>

#include <map>
#include <set>

#include <algorithm>
#include <functional>

using namespace std;

using pf = bool(*)(const int, const int);

typedef  bool(* pf1)(const int &, const int);


void pra_11_9();
void pra_11_10();
void pra_11_11();

int _tmain(int argc, _TCHAR* argv[])
{  
	pra_11_9();
	return 0;
}

void pra_11_9()
{
	string line, word;
	unsigned int count = 0;
	map<string, list<unsigned int>> words_line;
	ifstream input("words.txt");
	if (!input)
	{
		cout << "can't open the file !" << endl;
	}
	else
	{
		while (getline(input, line))
		{
			++count;
			istringstream istring_input(line);
			while (istring_input >> word)
			{
				words_line[word].push_back(count);
			}
		}
	}
	for (const auto & w : words_line)
	{
		list<unsigned int>::const_iterator iter_begin = w.second.cbegin() , iter_end = w.second.cend();
		cout << "word " << w.first << " find out in line :";
		while (iter_begin != iter_end)
		{
			cout << *(iter_begin++) << ",";
		}
		cout << endl;
	}

}