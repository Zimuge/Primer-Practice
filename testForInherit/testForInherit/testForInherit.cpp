// testForInherit.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

class Base
{
public:
	int pub;
protected:
	int pro;
private:
	int pri;

};

class D:public Base
{
public:
	int pro;
	int get_pro() const { return Base::pro;}
	//int get_pri() const { return Base::pri; }
};

int main()
{
    return 0;
}

