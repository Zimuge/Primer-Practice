// Practice3-004.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	/*          3.31         */
	/*
	int a[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		a[i] = i;
	}*/

	/*          3.35         */
	
	int a[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
	a[i] = i;
	cout << a[i] << ' ';
	}
	cout << endl;

	int *p = a;
	for (int i = 0; i < 10; i++)
	{
		*(p + i) = 0;
		cout << *(p + i) << ' ';
	}
	cout << endl;
	char str[] = { 'C', '+', '+' };
	int cnt = strlen(str);
	cout << cnt << endl;
	return 0;
}

