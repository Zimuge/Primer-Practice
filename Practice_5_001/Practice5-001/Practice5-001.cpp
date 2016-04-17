// Practice5-001.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int grade = 0;
	string str;
	
	cout << "请输入成绩:" << endl;
	
	while (cin >> grade)
	{
		if (grade < 60)
		{
			str = "F";
		}
		else
		{
			if (grade  >= 60 && grade<= 69)
			{
				str = "D";
			}
			if (grade >= 70 && grade <= 79)
			{
				str = "C";
			}
			if (grade >= 80 && grade <= 89)
			{
				str = "B";
			}
			if (grade >= 90 && grade <= 99)
			{
				str = "A";
			}
			if (grade == 100)
			{
				str = "A++";
			}
			else
			{
				if (grade % 10 > 7)
				{
					str += "+";
				}
				if (grade % 10 < 3)
				{
					str += "-";
				}
			}
		}

		cout << grade << ":" << str << endl;
		cout << "请输入成绩" << endl;
	}
	return 0;
}

