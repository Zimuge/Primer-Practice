// Practice_17_5_1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
	int i = -16;
	double d = 3.1415926535;
	cout << "i:" << setw(12) << i << "next col" << '\n';
	cout << "d:" << setw(12) << d << "next col" << '\n';

	cout << left;
	cout << "i:" << setw(14) << i << "next col" << '\n';
	cout << "d:" << setw(14) << d << "next col" << '\n';

	cout << right;
	cout << internal;
	cout << "i:" << setw(16) << i << "next col" << '\n';
	cout << "d:" << setw(16) << d << "next col" << '\n';


    return 0;
}

