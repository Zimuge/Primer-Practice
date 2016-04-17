// Practice_10.4.1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <iostream>
#include <vector>
#include <list>
#include <string>

#include <algorithm>
#include <numeric>

#include <functional>
#include <iterator>

using namespace std;
void pra_10_27();
void pra_10_28();

int _tmain(int argc, _TCHAR* argv[])
{
	//pra_10_27();
	pra_10_28();
	return 0;
}

void pra_10_27()
{
	list<int> lst_int = { 1, 3, 1, 1, 2, 2, 3, 3, 4, 5, 6, 7, 7, 8, 9, 9, 7, 5 },
		lst1_int;
	unique_copy(lst_int.begin(), lst_int.end(), back_inserter(lst1_int));

	list<int>::iterator iter = lst1_int.begin();
	while (iter != lst1_int.end())
	{
		cout << *iter << " ";
		++iter;
	}
	cout << endl;
}

void pra_10_28()
{
	vector<int> vec = { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, vec1, vec2, vec3, vec4;
	vector<int>::iterator  iter = vec.begin();
	auto iter1 = back_inserter(vec1);
	//auto iter2 = front_inserter(vec2);
	auto iter3 = inserter(vec3, vec3.begin());
	auto iter4 = inserter(vec4, vec4.end());
	while (iter != vec.end())
	{
		*iter1 = *iter;
		//iter2 = *iter;
		*iter3 = *iter;
		*iter4 = *iter;
		++iter;
	}

	iter = vec1.begin();
	cout << "back_inserter : ";
	while (iter != vec1.end())
	{
		cout << *iter << " ";
		++iter;
	}

	//iter = vec2.begin();
	//cout << '\n' << "front_inserter : ";
	//while (iter != vec2.end())
	//{
	//	cout << *iter << " ";
	//	++iter;
	//}

	iter = vec3.begin();
	cout << '\n' << "inserter_begin : ";
	while (iter != vec3.end())
	{
		cout << *iter << " ";
		++iter;
	}

	iter = vec4.begin();
	cout << '\n' << "inserter_end : ";
	while (iter != vec4.end())
	{
		cout << *iter << " ";
		++iter;
	}
	cout << endl;

}