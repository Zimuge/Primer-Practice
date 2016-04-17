// Practice_12_1_2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <iostream>
#include <fstream>
#include <sstream>

#include <vector>
#include <string>

#include <set>
#include <map>

#include <utility>
#include <iterator>

#include <numeric>
#include <algorithm>
#include <functional>

#include <memory>

using namespace std;
void pra_12_6();
void pra_12_7();

vector<int> * dynamic()
{
	vector<int> * vec_ptr = new vector<int>;
	return vec_ptr;
}

shared_ptr<vector<int>> dynamic1()
{
	shared_ptr<vector<int>> vec_ptr = make_shared<vector<int>>();
	return vec_ptr;
}

void input(vector<int> * vec_ptr)
{
	int temp;
	cout << "please input the value" << endl;
	while (cin >> temp)
	{
		vec_ptr->push_back(temp);
	}
}

void input1(shared_ptr<vector<int>> vec_ptr)
{
	int temp;
	cout << "please input the value" << endl;
	while (cin >> temp)
	{
		vec_ptr->push_back(temp);
	}
}

void reset_cin()
{
	cin.clear();
	cin.sync();
}
int _tmain(int argc, _TCHAR* argv[])
{
	pra_12_6();
	pra_12_7();
	return 0;
}


void pra_12_6()
{
	vector<int> * vec_ptr = dynamic();
	input(vec_ptr);
	vector<int>::iterator iter = vec_ptr->begin();
	while (iter != vec_ptr->end())
	{
		cout << *iter << " ";
		++iter;
	}
	cout << endl;
}


void pra_12_7()
{
	shared_ptr<vector<int>> vec_ptr = dynamic1();
	reset_cin();
	input1(vec_ptr);
	vector<int>::iterator iter = vec_ptr->begin();
	while (iter != vec_ptr->end())
	{
		cout << *iter << " ";
		++iter;
	}
	cout << endl;

}