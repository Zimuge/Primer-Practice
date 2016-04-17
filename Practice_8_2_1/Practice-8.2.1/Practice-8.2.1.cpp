// Practice-8.2.1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "stdlib.h"

using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	vector<string> vec;
	ifstream input;
	char * file = "E:\\Learning\\Program Practice\\C++ Primer\\Practice-8.2.1\\person.txt";//"data.txt";
	input.open(file);
	if (input)
	{
		string line;
		cout << "Open successfully" << endl;

		while (input >> line)
		{
			vec.push_back(line);
		}

		while (getline(input, line))
		{
			vec.push_back(line);
		}
	}
	else
	{
		cout << "Open failed" << endl;
	}

	input.close();
	vector<string>::iterator begin = vec.begin(), end = vec.end();
	for (begin = vec.begin(); begin < end; ++begin)
	{
		cout << *begin << endl;
	}

	return 0;
}

