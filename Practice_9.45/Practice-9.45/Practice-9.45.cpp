// Practice-9.45.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	string s, ahead = "MR", after = "III";
	cout << "please input a string" << endl;
	cin >> s;
	string::iterator iter = s.begin();
	s.insert(iter, { 'M', 'R' });
	s.append(after);
	cout << s << endl;
	s.insert(0, ahead);
	s.insert(s.size(), after);
	cout << s << endl;

	return 0;
}

