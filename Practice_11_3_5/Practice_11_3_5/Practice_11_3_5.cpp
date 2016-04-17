// Practice_11_3_5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <iostream>
#include <fstream>
#include <sstream>

#include <vector>
#include <string>

#include <map>
#include <set>

#include <utility>

#include <algorithm>
#include <functional>
#include <numeric>

using namespace std;

void pra_11_27();
void pra_11_28();
void pra_11_31_32();

int _tmain(int argc, _TCHAR* argv[])
{
	pra_11_28();
	pra_11_31_32();
	return 0;
}

void pra_11_28()
{
	map<string, vector<int>> m;
	map<string, vector<int>> ::iterator  iter = m.find("taopeng");

}

void pra_11_31_32()
{
	multimap<string, string> mul_author;
	string author, work;
	ifstream input("author.txt");
	if (input)
	{
		while (input >> author && input >> work)
		{
			//mul_author.insert({ author, work });
			mul_author.insert(make_pair(author, work));
		}
	}
	else
	{
		cout << "can't open the file" << endl;
	}

	multimap<string, string>::iterator lower_iter = mul_author.lower_bound("taopeng"), 
		upper_iter = mul_author.upper_bound("taopeng");
	cout << "author taopeng  has published ";
	while(lower_iter != upper_iter)
	{
		cout << lower_iter->second << ",";
		++lower_iter;
	}

}