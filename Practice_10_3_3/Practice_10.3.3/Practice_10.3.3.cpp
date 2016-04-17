// Practice_10.3.3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <string>

using namespace std;
void Print_Vector_String(vector<string>::iterator begin, vector<string>::iterator end);
void Input_Vector_String(vector<string> & vec_str);
void pra_10_20(string::size_type sz);
void pra_10_21();
int _tmain(int argc, _TCHAR* argv[])
{
	pra_10_20(6);
	pra_10_21();
	return 0;
}

void Print_Vector_String(vector<string>::iterator begin, vector<string>::iterator end)
{
	if (begin <= end)
	{
		while (begin != end)
		{
			cout << *begin << " ";
			++begin;
		}
		cout << endl;
	}
	else
	{
		cout << "error parameter" << endl;
	}

}

void Input_Vector_String(vector<string> & vec_str)
{
	string str;
	cout << "please input the vector of string" << endl;
	while (cin >> str)
	{
		vec_str.push_back(str);
	}
	cin.clear();
	cin.sync();
	//return vec_str;
}

void pra_10_20(string::size_type sz)
{
	vector<string> vec_str;
	Input_Vector_String(vec_str);
	auto temp = 
	count_if(vec_str.begin(), vec_str.end(), 
			[sz](const string & str) -> bool {return (str.size() > 6); });
	cout << temp << endl;

}

void pra_10_21()
{
	int sz = 10;
	auto f = [sz]() mutable -> int {while (--sz); return sz; };
	cout << f() << endl;
}