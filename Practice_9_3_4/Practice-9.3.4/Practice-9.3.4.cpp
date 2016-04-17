// Practice-9.3.4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <forward_list>
#include <string>

using namespace std;

void fun(forward_list<string> & flst, string str1, string str2);
int _tmain(int argc, _TCHAR* argv[])
{
	forward_list<int> flst;
	forward_list<string> flst1;
	int temp;
	string temp1,str1,str2;

	// input the elements to the flst
	cout << "please input the list's elements" << endl;

	while (cin >> temp)
	{
		flst.push_front(temp);
		cout << temp << " ";
	}
	 
	cout << endl;


	// input the elements to the flst1
	cin.clear();
	cin.sync();

	cout << "please input the list1's elements" << endl;

	while (cin >> temp1)
	{
		flst1.push_front(temp1);
		cout << temp1 << " ";
	}
	cout << endl;

	// input the string1 and string2
	cin.clear();
	cin.sync();
	cout << "please input the str1 and str2" << endl;
	cin >> str1 >> str2;

	forward_list<int>::iterator flst_iter_begin = flst.begin(), pre_iter = flst.before_begin();

	while (flst_iter_begin != flst.end())
	{
		if (*flst_iter_begin % 2)
		{
			flst_iter_begin = flst.erase_after(pre_iter);
		}
		else
		{
			++flst_iter_begin;
			++pre_iter;
		}
	}

	flst_iter_begin = flst.begin();

	while (flst_iter_begin != flst.end())
	{
		cout << *flst_iter_begin << " ";
		++flst_iter_begin;
	}
	fun(flst1, str1, str2);
	return 0;
}



void fun(forward_list<string> & flst, string str1, string str2)
{
	bool found_flag = false;
	forward_list<string>::iterator iter = flst.begin(), pre_iter = flst.before_begin();
	while (iter != flst.end())
	{
		if (*iter == str1)
		{
			iter = flst.insert_after(iter, str2);
			found_flag = true;
			++pre_iter;
		}
		++iter;
		++pre_iter;	
	}

	if (!found_flag)
	{
		flst.insert_after(pre_iter, str2);
	}

	iter = flst.begin();
	while (iter != flst.end())
	{
		cout << *iter << " ";
		++iter;
	}

	cout << endl;
}