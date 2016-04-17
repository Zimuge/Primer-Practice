// Practice3-002.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <string>
#include <cstring>
#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;

using std::string;
using std::vector;

int _tmain(int argc, _TCHAR* argv[])
{
	/*      3.08        */
	/*string s = "hello world!!";
	for (char c : s)
		c = 'x';
	cout << s << endl;

	cout << "please input a string " << endl;

	getline(cin, s);
	string str;
	*/


	/*            3.09          */
	/*  3.09for (decltype(s.size()) i = 0; i < s.size(); i++)
	{
		if (!ispunct(s[i]))
		{
			str += s[i];
		}

	}*/

	/*         3.10      */
	/*  for (auto c:s)
	if (!ispunct(c))
		str += c;

	cout << str << endl;

	*/

	/*                    3.17                */
	/*vector<string> word;
	string s;
	while (cin >> s)
	{
		word.push_back(s);
	}
	decltype(word.size()) i = 0 ,cnt = word.size();
	for (i = 0; i < cnt; ++i)
	{
		for (char & c : word[i])
			c = toupper(c);
		cout << word[i] << endl;
	}*/


	/*               3.20(1)               */
	/*vector<int> arr;
	int a;
	while (cin >> a)
	{
		arr.push_back(a);
	}
	
	decltype(arr.size()) i = 0, cnt = arr.size();
	for (i = 0; cnt >= 2 && i < cnt - 1; ++i)
	{
		cout << arr[i] + arr[i + 1] << endl;
	}*/


	/*               3.20(2)                */
	vector<int> arr;
	int a;
	while (cin >> a)
	{
		arr.push_back(a);
	}

	decltype(arr.size()) i = 0, cnt = arr.size();

	for (i = 0; cnt >= 2 && i <= (cnt - 1) / 2; ++i)
	{
		cout << arr[i] + arr[cnt - 1 - i] << endl;
	}

	/*if (cnt % 2)//奇数  方法二
	{
		for (i = 0; cnt >= 2 && i <= cnt / 2; ++i)
		{
			cout << arr[i] + arr[cnt - 1 - i] << endl;
		}
	}
	else
	{
		for (i = 0; cnt >= 2 && i <= (cnt / 2 - 1); ++i)
		{
			cout << arr[i] + arr[cnt - 1 - i] << endl;
		}
	}*/



	return 0;
}

