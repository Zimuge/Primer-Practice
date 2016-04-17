// Practice-10.3.1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
bool More_Than_5_Words(string & s);
void Input_Vector_String(vector<string> & vec_str);
void Print_Vector_String(vector<string>::iterator begin, vector<string>::iterator end);

int _tmain(int argc, _TCHAR* argv[])
{  
	vector<string> vec_str;
	Input_Vector_String(vec_str);
	auto iter = partition(vec_str.begin(), vec_str.end(), More_Than_5_Words);
	Print_Vector_String(vec_str.begin(), iter);
	return 0;
}


bool More_Than_5_Words(string & s)
{
	if (s.size() >= 5)
	{
		return true;
	}
	else
	{
		return false;
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