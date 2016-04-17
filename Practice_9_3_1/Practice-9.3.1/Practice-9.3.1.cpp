// Practice-9.3.1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <deque>
#include <string>
#include <vector>
#include <list>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{


	/***************************9.18 & 9.19**************/
	
	/*string str;
	//deque<string>  queue;
	list<string> queue;
	cout << "please input the string" << endl;
	while (cin >> str)
	{
		queue.push_back(str);
	}

	//deque<string>::iterator iter1 = queue.begin(), iter2 = queue.end();
	list<string>::iterator iter1 = queue.begin(), iter2 = queue.end();
	while (iter1 != iter2)
	{
		cout << *iter1 << " ";
		++iter1;
	}*/

	/***************************9.20  **************/
	/*int num;
	list<int> lis;
	deque<int> queue_1, queue_2;
	cout << "please input the string" << endl;
	while (cin >> num)
	{
		lis.push_back(num);
	}

	list<int>::iterator iter_1 = lis.begin(), iter_2 = lis.end();

	while (iter_1 != iter_2)
	{
		if ((*iter_1) % 2)
		{
			queue_1.push_back(*iter_1);
		}
		else
		{
			queue_2.push_back(*iter_1);
		}
		++iter_1; 
	}

	deque<int>::iterator queue_1_iter_begin = queue_1.begin(), queue_1_iter_end = queue_1.end();
	deque<int>::iterator queue_2_iter_begin = queue_2.begin(), queue_2_iter_end = queue_2.end();

	while (queue_1_iter_begin != queue_1_iter_end)
	{
		cout << *queue_1_iter_begin << " ";
		++queue_1_iter_begin;
	}

	cout << endl;

	while (queue_2_iter_begin != queue_2_iter_end)
	{
		cout << *queue_2_iter_begin << " ";
		++queue_2_iter_begin;
	}
	cout << endl;*/

	/***************************9.21  **************/
	vector<int> vec;
	int temp;
	auto iter = vec.begin();
	while (cin >> temp)
	{
		iter = vec.insert(iter, temp);
	}
	auto iter_end = vec.end();

	while (iter != iter_end)
	{
		cout << *iter << " ";
		++iter;
	}
	cout << endl;
	return 0;
}

