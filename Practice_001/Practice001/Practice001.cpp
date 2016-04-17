// Practice001.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>

using namespace std;

int i = 42;
double ii = 55;
const int &d = ii;
int _tmain(int argc, _TCHAR* argv[])
{
	int i = 100, sum = 0;
	int j = i;
	cout << j << endl;
	for (int i = 0; i != 10; ++i)
	{
		sum += i;
	}
	int ival = 9;
	int &ref = ival;
	int &ref2 = ref;
	
	int *p = &ref2;
	*p = 15;
	ref2 = 10;
	int *p1 = p;
	//d = 65;
	cout << ival << " " << sum << endl;
	return 0;
}

