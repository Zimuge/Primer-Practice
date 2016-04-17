// Practice-10.2.2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;
void pra_10_6(void);

int _tmain(int argc, _TCHAR* argv[])
{
	pra_10_6();
	return 0;
}

void pra_10_6(void)
{
	vector<int> vec_int;
	int temp;
	cout << "please input the vector" << endl;
	while (cin >> temp)
	{
		vec_int.push_back(temp);
	}

	auto  iter1 = back_inserter(vec_int);
	//fill_n(vec_int.begin(),vec_int.size() , 0);
	unique(vec_int.begin(), vec_int.end());
	vector<int>::iterator iter = vec_int.begin();

	while (iter != vec_int.end())
	{
		cout << *iter << " ";
		iter++;
	}
	cout << endl;
}