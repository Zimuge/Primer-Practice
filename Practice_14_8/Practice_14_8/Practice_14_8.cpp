// Practice_14_8.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

#include <vector>
#include <string>

#include"if_then_else.h"
#include"InputString.h"

using namespace std;

void pra_14_34();

void pra_14_35();
int main()
{
	pra_14_34();
	pra_14_35();
	
    return 0;
}

void pra_14_34()
{
	if_then_else ite;
	cout << ite(1, 1, 2) << endl;
	cout << ite(0, 1, 2) << endl;
}

void pra_14_35()
{
	InputString inputstr;
	vector<string> str_vec;
	string str;
	while((str = inputstr()) != "")
	{
		str_vec.push_back(str);
	}

	vector<string>::iterator iter = str_vec.begin();
	while(iter != str_vec.end())
	{
		cout << *iter << endl;
		++iter;
	}
	
}