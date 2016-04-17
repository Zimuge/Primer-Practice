// Practice_10_4_3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <fstream>

#include <vector>
#include <list>
#include <string>
#include <iterator>

#include <algorithm>
#include <functional>
#include <numeric>

using namespace std;
using namespace std::placeholders;

void pra_10_34();
void pra_10_35();
void pra_10_36();
void pra_10_37();
int _tmain(int argc, _TCHAR* argv[])
{
	pra_10_34();
	//pra_10_35();
	//pra_10_36();
	pra_10_37();

	return 0;
}

void pra_10_34()
{
	vector<int> vec_int = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
	vector<int>::reverse_iterator r_iter = vec_int.rbegin();
	while (r_iter != vec_int.rend())
	{
		cout << *(r_iter++) << " ";
	}
	cout << endl;
}

void pra_10_35()
{
	vector<int> vec_int = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
	vector<int>::iterator iter = vec_int.end();
	while (iter != vec_int.begin())
	{
		cout << *(--iter) << " ";
	}
	cout << endl;
}


void pra_10_36()
{
	list<int> lst_int = { 1, 2, 3, 4, 5, 0, 7, 8, 9, 10, 11, 12, 0, 14, 15, 0, 17, 0, 19, 20 };
	list<int>::reverse_iterator r_iter = lst_int.rbegin();
	r_iter = find(lst_int.rbegin(), lst_int.rend(), 0);
	if (r_iter == lst_int.rend())
	{
		cout << "there is no zero!" << endl;
	}
	else
	{
		auto iter = r_iter.base(),iter1 = lst_int.begin();
		list<int>::size_type sz = 0;
		while (iter1 != iter)
		{
			sz++;
			iter1++;
		}
		cout << "the last zero is the " << sz << ". " << endl;
	}
	
}

void pra_10_37()
{
	vector<int> vec_int = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	list<int> lst_int((vec_int.rbegin() + 3), (vec_int.rend() - 2));
	ostream_iterator<int> cout_iter(cout, " ");
	copy(lst_int.begin(), lst_int.end(), cout_iter);
	cout << endl;
}