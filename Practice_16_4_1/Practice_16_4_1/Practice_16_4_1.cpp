// Practice_16_4_1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <iostream>
#include <string>

using namespace std;
template <typename T>
void print(ostream & out, const T & val)
{
	out << val << endl;
}

template<typename T,typename ... Args>
void print(ostream & out ,const T & val, const Args & ... args)
{
	out << val << ",";
	return(print(out, args...));// expand the parameter package and recursively call
}
int main()
{
	string s = "hello!";
	double d = 3.1415926535;
	int i = 24;
	float f = 3.14;
	string s1 = "world!";
	print(cout, s, d, i, f, s1);
	print(cout, s, d, i);

	print(cout, s, f, s1);
    return 0;
}

