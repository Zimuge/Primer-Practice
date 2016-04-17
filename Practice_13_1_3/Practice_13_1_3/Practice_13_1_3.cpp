// Practice_13_1_3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;
class X
{
public:
	X()
	{
		cout << "X()" << endl;
	}
	X(const X & temp)
	{
		cout << "X(const & X)" << endl;
	}
	X & operator = (const X & temp)
	{
		cout << "X & operator = (const X & )" << endl;
		return *this;
	}

	~X()
	{
		cout << "~X()" << endl;
	}

	
};


void f(X a)
{
	
}
int main()
{
	
	X a;
	X b = a;
	b = a;
	X * c = new X;
	delete c;
	f(b);
    return 0;
}

