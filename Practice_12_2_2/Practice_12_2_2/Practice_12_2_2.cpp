// Practice_12_2_2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

#include <vector>
#include <string>

#include <utility>
#include <memory>

#include <map>
#include <set>

using namespace std;

//#define D_SCL_SECURE_NO_WARNINGS
int _tmain(int argc, _TCHAR* argv[])
{
	map<string, int> m;
	//m.insert(make_pair("abd", 3));
	vector<string> vec_str(3, "zimuge");
	//cout << m["abd"] << endl;
	unsigned int sz;
	cout << "please input the array size" << endl;
	cin >> sz;
	allocator<string> allo;
	string * p = allo.allocate(sz);

	string tem;

	string * q = p;
	
	while (cin >> tem && q != p + 5)
	{
		allo.construct(q++, tem);
	}

//	q = uninitialized_copy(vec_str.begin(), vec_str.end(), q);

	uninitialized_fill_n(q, 5, "tp");

	q = p;
	while (q != p + sz)
	{
		cout << *q << " ";
		allo.destroy(q++);
	}
	cout << endl;
	allo.deallocate(p, sz);

	return 0;
}

