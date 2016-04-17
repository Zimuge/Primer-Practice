// Practice_12_2_1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

#include <string>

using namespace std;

void pra_12_23();
void pra_12_24();
int _tmain(int argc, _TCHAR* argv[])
{
	allocator<int> a;
	int * p = a.allocate(10);
	a.construct(p, 1);
	a.construct(p + 1, 2);

	cout << *p << endl;
	cout << *(p + 1) << endl;

	a.destroy(p);
	a.deallocate(p, 1);


	cout << *(p) << endl;
	

	//pra_12_23();
	//pra_12_24();
	return 0;
}

void pra_12_23()
{
	const char str1[] = { "coincidence" };
	const char str2[] = { "is Tao Peng" };
	size_t length_1 = sizeof(str1) / sizeof(char);
	size_t length_2 = sizeof(str2) / sizeof(char);
	size_t sz = length_1 + length_2 - 1;
	cout << length_1 << endl;
	char * str = new char[sz];

	size_t i = 0;

	for (i = 0; i < length_1 - 1; i++)
	{
		str[i] = str1[i];
	}
	
	str[i] = ' ';

	for (i = 0; i < +length_2; i++)
	{
		str[i + length_1] = str2[i];
	}
	cout << str << endl;

	string str3 = "Zimuge";
	string str4 = "is Tao Peng";
	str3.append(str4);
	cout << str3 << endl;
}

void pra_12_24()
{
	cout << "please input a string" << endl;
	string str;
	cin >> str;

	unsigned int  sz = str.size();

	char * cp = new  char[sz + 1];
	unsigned int i = 0;
	for (; i < sz; i++)
	{
		cp[i] = str[i];
	}
	cp[i] = 0;
	cout << cp << endl;
}