// Practice5-002.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	/*��������������������5.20                  */
	/*string str_bef, str_now;
	while (cin >> str_now)
	{
		if (str_bef == str_now)
		{
			cout << str_now << endl;
			break;
		}
		else
		{
			str_bef = str_now; 
			cout << "there is no same string" << endl;
		}
	}*/

	/*��������������������5.21                  */
	string str_bef, str_now;
	while (cin >> str_now)
	{
		if (str_now[0] < 'A' || str_now[0] > 'Z')
			continue;
		if (str_bef == str_now)
		{
			cout << str_now << endl;
			break;
		}
		else
		{
			str_bef = str_now;
			cout << "there is no same string" << endl;
		}
	}

	return 0;
}

