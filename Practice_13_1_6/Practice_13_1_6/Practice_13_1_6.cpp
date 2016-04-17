// Practice_13_1_6.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Employee.h"



int main()
{
	Employee em1("em1");
	Employee em2("em2");
	Employee em3 = em2;
	em3 = em2;
    return 0;
}

