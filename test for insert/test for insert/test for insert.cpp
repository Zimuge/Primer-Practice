// test for insert.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <list>
#include <forward_list>
#include <vector>
#include <string>

using namespace std;

// ��������Ϊ�˲���inser ���� ��insert_after �����ķ���ֵ������ָ���ĸ�Ԫ�صĵ�������

// ����˼���ǣ�ÿ�β���������ͬ�������� insert ����ֵ��Ϊ��һ�εĲ���㡣��������Ԫ��λ������

//���Խ��������ֵ�ǲ���Ԫ�������һ������Ԫ�صĵ�������

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

