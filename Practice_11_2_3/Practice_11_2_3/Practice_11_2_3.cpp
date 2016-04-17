// Practice_11_2_3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
#include <fstream>
#include <sstream>

#include <vector>
#include <utility>

#include <map>
#include <set>

#include <algorithm>
#include <functional>
#include <numeric>


using namespace std;

void pra_11_12();
void pra_11_13();
void pra_11_14();


int _tmain(int argc, _TCHAR* argv[])
{
	pra_11_12();
	return 0;
}

void pra_11_12()
{
	string str;
	vector<pair<string, int>> vec_pair;
	pair<string, int> par;
	int value;
	cout << "please input string and integer" << endl;
	while (cin >> str && cin >> value)
	{
		 par = make_pair(str, value);
		vec_pair.push_back(par);
	}
}

void pra_11_13()
{
	string str;
	vector<pair<string, int>> vec_pair;
	pair<string, int> par;
	int value;
	cout << "please input string and integer" << endl;
	while (cin >> str && cin >> value)
	{
		//pair<string, int> p(str, value);
		pair<string, int> p = { str, value };
		vec_pair.push_back(p);
	}
}

void pra_11_14()
{
	map<string, vector<pair<string, string>>> families;
}