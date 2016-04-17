// Practice3-003.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{

	/*     3.23           */
	/*vector<int> vec(10, 0);
	int a = 1;
	for (auto it = vec.begin(); it != vec.end(); ++it)
		*it = a++;
	for (int & a : vec)
		a = 2 * a;
	for (int a : vec)
		cout << a << endl;
		*/


	/*               3.24(1)                */
	/*vector<int> arr;
	int a;
	while (cin >> a)
	{
		arr.push_back(a);
	}
	for (auto it = arr.begin(); it != (arr.end() - 1); ++it)
	{
		cout << *it + *(it + 1) << endl;
	}
	*/


	/*               3.24(2)                */
	vector<int> arr;
	int a;
	while (cin >> a)
	{
		arr.push_back(a);
	}
	auto beg = arr.begin(); 
	auto end = arr.end();
	auto size = end - beg;
	for (decltype (size) i = 0; i <= (size - 1) / 2; i++)
	{
		cout << *(beg + i) + *(end - i - 1) << endl;
	}

	return 0;
}

