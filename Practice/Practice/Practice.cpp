// Practice.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;
int i = 0;
int _tmain(int argc, _TCHAR* argv[])
{
	unsigned int u = 10, u2 = 42;
	cout << u2 - u << endl;
	cout << u - u2 << endl;
	 
	short i = 020, i2 = 42;
	float f = 20.;
	cout << i - i2 << endl;
	cout << i2 - i << endl;
	cout << i - u << endl;
	cout << u - i << endl;
	cout << '?';
	cout << "\tHi! \60 \? \"\n ";
	cout << i << f << endl;

	int a = (3.14 );
	double Double = 6;
	return 0;
}

