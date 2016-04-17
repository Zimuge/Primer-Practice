// test for erase.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <list>
#include <forward_list>

using namespace std;

// 测试erase 和 erase_after 的返回值其实就是 最后一个删除元素的下一个元素迭代器。

//测试思想：看看删除后的元素排列  erase 为左闭合，erase_after 为 双开区间（具体见C++ primer chapter 9-3）
int _tmain(int argc, _TCHAR* argv[])
{
	list<int> lst;
	forward_list<int> flst;
	auto iter1 = lst.begin();
	auto iter2 = flst.before_begin();
	for (int i = 0; i < 5; i++)
	{
		iter1 = lst.insert(iter1, 2, i);
		iter2 = flst.insert_after(iter2, 2, i);
	}
	iter1 = lst.begin();
	list<int>::iterator temp = lst.begin();
	temp++;
	temp++;
	iter2 = flst.begin();
	forward_list<int>::iterator temp1 = iter2;
	temp1++;
	temp1++;

	auto temp2 = lst.erase(iter1, temp);
	auto temp3 = flst.erase_after(iter2, temp1);

	if (temp2 == temp && temp1 == temp3)
	{
		cout << "YES YES" << endl;
	}
	return 0;
}

