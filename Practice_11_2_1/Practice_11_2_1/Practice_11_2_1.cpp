// Practice_11_2_1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

#include <vector>
#include <string>

#include <map>
#include <set>

#include <algorithm>
#include <functional>

using namespace std;

void pra_11_7();
void Add_Famliy(map<string, vector<string>> & famlies, const string & famliy);
void Add_Child(map<string, vector<string>> & famlies, const string & famliy, const string & child);

int _tmain(int argc, _TCHAR* argv[])
{
	pra_11_7();
	return 0;
}

void pra_11_7()
{
	map<string, vector<string>> famlies;

	Add_Famliy(famlies, "赵");
	Add_Famliy(famlies, "钱");
	Add_Child(famlies, "赵", "儿子");
	Add_Child(famlies, "钱", "孙子");

	for (const auto & fam : famlies)
	{
		cout << "famliy " << fam.first << " has children :";
		auto iter = fam.second.cbegin(), iter1 = fam.second.cend();
		while (iter != iter1)
		{
			cout << *iter << " ";
			++iter;
		}

		cout << endl;
	}
	
}

void Add_Famliy(map<string, vector<string>> & famlies, const string & famliy)
{
	if (famlies.find(famliy) == famlies.end())
	{
		famlies[famliy] = vector<string>();
	}
}

void Add_Child(map<string, vector<string>> & famlies, const string & famliy, const string & child)
{
	famlies[famliy].push_back(child);
}