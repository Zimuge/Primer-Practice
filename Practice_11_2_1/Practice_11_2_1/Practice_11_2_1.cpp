// Practice_11_2_1.cpp : �������̨Ӧ�ó������ڵ㡣
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

	Add_Famliy(famlies, "��");
	Add_Famliy(famlies, "Ǯ");
	Add_Child(famlies, "��", "����");
	Add_Child(famlies, "Ǯ", "����");

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