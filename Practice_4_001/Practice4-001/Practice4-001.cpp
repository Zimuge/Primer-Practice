// Practice4-001.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int i = 0x15;
	double j = 5.69;
	j = static_cast<int>(6.89);
	cout << j << " " << i << endl;
	cout << "int ：" << sizeof (int) << endl;
	cout << "short ：" << sizeof (short) << endl;
	cout << "char ：" << sizeof (char) << endl;
	cout << "long ：" << sizeof (long) << endl;
	cout << "long long ：" << sizeof (long long) << endl;
	cout << "double ：" << sizeof (double) << endl;
	cout << "float ：" << sizeof (float) << endl;
	cout << "long double ：" << sizeof (long double) << endl;
	return 0;
}

