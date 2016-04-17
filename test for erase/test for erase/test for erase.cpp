// test for erase.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <list>
#include <forward_list>

using namespace std;

// ����erase �� erase_after �ķ���ֵ��ʵ���� ���һ��ɾ��Ԫ�ص���һ��Ԫ�ص�������

//����˼�룺����ɾ�����Ԫ������  erase Ϊ��պϣ�erase_after Ϊ ˫�����䣨�����C++ primer chapter 9-3��
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

