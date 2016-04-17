// Practice-9.3.3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <deque>

using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	int a[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
	vector<int> vec(a,a + 11);
	list<int> lis(a, a + 11);
    
	vector<int>::iterator vec_iter_begin = vec.begin(), vec_iter_end = vec.end();
	list<int>::iterator list_iter_begin = lis.begin(), list_iter_end = lis.end();

	/**********************for test*****************/
	/*while (vec_iter_begin != vec_iter_end)
	{
		cout << *vec_iter_begin << " ";
		++vec_iter_begin;
	}

	cout << endl;

	while (list_iter_begin != list_iter_end)
	{
		cout << *list_iter_begin << " ";
		++list_iter_begin;
	}
	*/
	while (vec_iter_begin != vec.end())
	{
		if (!(*vec_iter_begin % 2))// the element is even number
		{
			vec_iter_begin = vec.erase(vec_iter_begin);
		}
		else
		{
			++vec_iter_begin;
		}
	}

	while (list_iter_begin != lis.end())
	{
		if ((*list_iter_begin % 2))// the element is odd number
		{
			list_iter_begin = lis.erase(list_iter_begin);
		}
		else
		{
			++list_iter_begin;
		}
	}

	// the iterator is invalid so we need reget the value
	vec_iter_begin = vec.begin();
	vec_iter_end = vec.end();
	list_iter_begin = lis.begin();
	list_iter_end = lis.end();

	while (vec_iter_begin != vec_iter_end)
	{
	cout << *vec_iter_begin << " ";
	++vec_iter_begin;
	}

	cout << endl;

	while (list_iter_begin != list_iter_end)
	{
	cout << *list_iter_begin << " ";
	++list_iter_begin;
	}
	
	return 0;
}

