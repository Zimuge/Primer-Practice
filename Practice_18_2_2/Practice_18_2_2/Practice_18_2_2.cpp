// Practice_18_2_2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

namespace exercise
{
	int ivar = 0;
	double dvar = 0;
	const int limit = 100;
}

int ivar = 0;



void manip()
{
	using namespace exercise;

	//using  exercise::ivar;
	//using  exercise::dvar;
	//using  exercise::limit;
	double dvar = 3.1415925;
	int iobj = limit + 1;
	//++ivar;
	++::ivar;
}
int main()
{
	

    return 0;
}

