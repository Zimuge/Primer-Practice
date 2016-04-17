// test for insert.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <list>
#include <forward_list>
#include <vector>
#include <string>

using namespace std;

// 本程序是为了测试inser 函数 和insert_after 函数的返回值到底是指向哪个元素的迭代器。

// 测试思想是：每次插入两个相同的数，把 insert 返回值作为下一次的插入点。看容器中元素位置排列

//测试结果：返回值是插入元素中最后一个插入元素的迭代器。

int _tmain(int argc, _TCHAR* argv[])
{
	list<int> lst;
	forward_list<int> flst;

	list<int>::iterator iter1 = lst.begin();
	forward_list<int>::iterator iter2 = flst.before_begin();

	for (int i = 0; i < 5; i++)
	{
		iter1 = lst.insert(iter1, 2, i);
		iter2 = flst.insert_after(iter2, 2, i);
	}


	iter1 = lst.begin();
	iter2 = flst.begin();

	while (iter1 != lst.end())
	{
		cout << *iter1 << " ";
		++iter1;
	}

	cout << endl;

	while (iter2 != flst.end())
	{
		cout << *iter2 << " ";
		++iter2;
	}
	return 0;
}

