// Practice_17_4_1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <regex>
#include <random>
#include <tuple>
using namespace std;
using namespace std::regex_constants;

unsigned int pra_17_28();

int main()
{
	
	tuple<int,double,string>  t(2, 1.5, "hello world!");

	cout << get<0>(t) << endl;
	//cout << int << endl;
	size_t sz = tuple_size<decltype(t)>::value;
	for(int i = 0; i < 100; ++i)
	{
		cout << pra_17_28() << " ";
	}
		
	cout << endl;
	tuple_element<1, decltype(t)>::type;
	//cout << tuple_element<1,decltype(t)>() << endl;
    return 0;
}

unsigned int pra_17_28()
{
	static default_random_engine e;
	static uniform_int_distribution<unsigned int> u(1, 10);
	return u(e);
}