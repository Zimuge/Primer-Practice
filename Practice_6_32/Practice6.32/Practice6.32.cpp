// Practice6.32.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>


using namespace std;

int &get(int * arr, int index)
{
	return arr[index];
}

void printv(vector<int>::iterator beg, vector<int>::iterator end)
{
	if (beg != end)
	{
		cout << *(beg) << ' ';
		printv(++beg, end);
	}
	else
	{
		return;
	}
}

string (&fun(string (&str) [10])) [10]
{
	return str;
}

using arr_p = string[10];


arr_p & fun1(arr_p &str)
{
	return str;
}

auto fun2(string( &str) [10])->string(&)[10]
{
	return str;
}

string str[10];
decltype(str) & fun3(string(&str)[10])
{
	return str;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int arry[10];
	
	for (int i = 0; i != 10; ++i)
	{
		get(arry, i) = i;
		cout << arry[i] << endl;
	}

	int(*p)[10] = &arry;
	cout << p << ',' << *p << ',' << arry[11] << endl;
	vector<int>  v = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printv(v.begin(), v.end());
	return 0;
}

