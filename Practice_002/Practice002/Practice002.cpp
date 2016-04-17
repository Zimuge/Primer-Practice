// Practice002.cpp : 定义控制台应用程序的入口点。
//

/*#include "stdafx.h"
#include <iostream>
#include <math.h>

using namespace std;
using DB = double;
int _tmain(int argc, _TCHAR* argv[])
{
	int *p;
	int a = 10;
	const int *const p2 = &a;
	//p = p2;
	//constexpr int mf = 20;
#include <iostream>

	return 0;
}*/
#include "stdafx.h"
#include <iostream>
#include<typeinfo>
#include <cmath>
//#include <math.h>
int main()
{
	const int i = 42;
	auto j = i;
	const auto &k = i;
	auto *p = &i;
	const auto j2 = i, &k2 = i;
	std::cout << typeid(i).name() << std::endl;
	std::cout << typeid(j).name() << std::endl;
	std::cout << typeid(k).name() << std::endl;
	std::cout << typeid(p).name() << std::endl;
	std::cout << typeid(j2).name() << std::endl;
	std::cout << typeid(k2).name() << std::endl;
	struct Sale_data
	{
		int a;
		int c;
	};
	return 0;
}

