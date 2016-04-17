// Practice_10.3.4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <functional>
#include <algorithm>
#include <numeric>

using namespace std;
using namespace std::placeholders;

void pra_10_22();
bool check_size(string & s, string::size_type sz);
bool check_size1(string & s, int a);
void pra_10_24();

int _tmain(int argc, _TCHAR* argv[])
{
	pra_10_22();
	pra_10_24();
	return 0;
}

void pra_10_22()
{
	string str;
	vector<string> vec_str;
	cout << "please input the vector" << endl;
	while (cin >> str)
	{
		vec_str.push_back(str);
	}
	string::size_type sz = 6;
	auto count = count_if(vec_str.begin(), vec_str.end(), bind(check_size,_1,sz));
	cout << count << endl;


}

void pra_10_24()
{
	cin.clear();
	cin.sync();
	cout << "please input the string " << endl;
	string temp;
	int value;
	cin >> temp;
	vector<int> vec_int;
	cout << "please input the Vector<int> " << endl;
	while (cin >> value)
	{
		vec_int.push_back(value);
	}
	auto f = bind(check_size1, ref(temp), _1);
	auto iter = find_if(vec_int.begin(), vec_int.end(), f);
	cout << *iter << endl;

}

bool check_size(string & s, string::size_type sz)
{
	return (s.size() <= sz);
}

bool check_size1(string & s, int a)
{
	return (s.size() < a);
}