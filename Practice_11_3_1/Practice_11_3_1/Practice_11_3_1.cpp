// Practice_11_3_1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

#include <vector>
#include <string>

#include <map>
#include <set>

#include <utility>

#include <algorithm>
#include <functional>


using namespace std;

void pra_11_16();
void pra_11_18();
void pra_11_19();

int _tmain(int argc, _TCHAR* argv[])
{
	pra_11_16();
	pra_11_19();
	return 0;
}

void pra_11_16()
{
	map<string, int> map_string;
	++map_string["abc"];
	auto m = map_string.begin();
	cout << m->second << endl;
	m->second = 5;
	cout << m->second << endl;
} 


void pra_11_19()
{
	multiset<string> bookstore;
	multiset<string>::iterator iter = bookstore.begin();
	map<string, int> word;
	map<string, int>::iterator iter1 = word.begin();
}