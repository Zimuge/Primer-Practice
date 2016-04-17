// Practice_10.3.2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
auto f = [](int a, int b) {return (a + b); };
void biggies(vector<string> & s, string::size_type sz);
void pra_10_18(void);
void Input_Vector_String(vector<string> & vec_str);
void Print_Vector_String(vector<string>::iterator begin, vector<string>::iterator end);


int _tmain(int argc, _TCHAR* argv[])
{
	int num = 8;
	auto f1 = ([num](int a) {return num + a; });
	pra_10_18();
	return 0;
}

void biggies(vector<string> & vec_str, string::size_type sz)
{
	/******************************10.18***************************/
	//vector<string>::iterator iter = partition(vec_str.begin(), vec_str.end(), [sz](string & str)-> bool {return(str.size() >= sz); });
	

	/****************************10.19****************************/
	vector<string>::iterator iter = stable_partition(vec_str.begin(), vec_str.end(), [sz](string & str)-> bool {return(str.size() >= sz); });
	Print_Vector_String(vec_str.begin(),iter);
}

void pra_10_18(void)
{
	vector<string> vec_str;
	Input_Vector_String(vec_str);
	biggies(vec_str, 5);
	

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