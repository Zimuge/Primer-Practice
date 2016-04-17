// Practice-9.2.5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <deque>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	list<char *> lis = { "abd", "ad", "cd", "heeheh", "heihei" };
	vector<string> vec;
	deque<string>  queue(lis.begin(), lis.end());




	vec.assign(lis.begin(), lis.end());
	 
	vec.insert(vec.begin(), "hello");
	vec.insert(vec.begin(), 3, "world");
	vec.insert(vec.begin(), { "tao", "peng", "coincidence", "wechat" });
	 
	queue.push_front("world");
	queue.push_front("hello");

	vector<string>::iterator iter = vec.begin(), iter1 = vec.end();
	while (iter != iter1)
	{
		cout << *iter << " ";
		++iter;
	}
	return 0;
}

