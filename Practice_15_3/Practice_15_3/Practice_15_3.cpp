// Practice_15_3.cpp : 定义控制台应用程序的入口点。
//


#include "stdafx.h"
#include <iostream>

#include<string>

using namespace std;
class Base
{
public:
	Base(string str):basename(str)
	{
		
	}

	string name()
	{
		return basename;
	}

	virtual void print(ostream &os)
	{
		os << basename;
	}
private:
	string basename;
};


class Derived : public Base
{
public:
	Derived(string str,int value):Base(str),i(value)
	{
		
	}
	void print(ostream &os)
	{
		Base::print(os);
		os << " " << i;
	}
private:
	int i;
};
int main()
{
	Base bobj("bobj");
	Derived dobj("dobj", 1);
	Base * bp1 = &bobj;
	Base * dp1 = &dobj;
	bp1->print(cout);
	cout << endl;
	dp1->print(cout);
    return 0;
}

