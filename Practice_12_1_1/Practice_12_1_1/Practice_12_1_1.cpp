// Practice_12_1_1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <iostream>
#include <fstream>

#include <vector>
#include <string>

#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>

#include <algorithm>
#include <functional>
#include <memory>
#include "StrBlob.h"

//typedef int  * T;
//using a = int *;

using namespace std;

shared_ptr<int> p = make_shared<int>(42);
//shared_ptr<T> pp = make_shared<T>(0x4200);
initializer_list<string> lst{ "taopeng","oo", "hehe"};\

void pra_12_2();

int _tmain(int argc, _TCHAR* argv[])
{
	pra_12_2();
	//cout << sizeof(p) << endl;
	//cout << sizeof(int) << endl;
	//cout << p << endl;
	return 0;
}


void pra_12_2()
{
	StrBlob b1;
	{
		StrBlob b2 = { "taopeng", "oo", "hehe" };
		b1 = b2;
		b1.push_back("about");
		cout << b2.size() << endl;
	}
	cout << b1.size() << endl;
	cout << b1.front() << " " << b1.back() << endl;

	const StrBlob b3 = b1;
	cout << b3.front() << " " << b3.back() << endl;
}