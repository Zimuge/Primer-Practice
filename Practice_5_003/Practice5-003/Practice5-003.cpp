// Practice5-003.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int a, b;
	cout << "please input a and b:" << endl;
	while (cin >> a >> b)
	{
		try{
			if (b == 0)
				throw runtime_error("divider can't be zero!");
			else
				cout << "a / b = " << a / b << endl;
		}
		catch (runtime_error error)
		{
			cout << error.what() << '\n' << "Try again ? Enter 'y' or 'n'" << endl;
			char chr;
			cin >> chr;
			if (chr == 'n')
				break;
			else
				continue;
		}
		
	}
	
	return 0;
}

