// Practice_8_001.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <fstream>

using namespace std;

istream & fun(istream & in)
{
	int v;
	while (in >> v && !in.eof())
	{ 
		if (in.bad())
		{
			cout << "IO������" << endl;
			in.clear();

			continue;
		}
		if (in.fail())
		{
			cout << "���ݳ�����" << endl;
			in.clear();
			continue;
		}
		cout << v << ' ';
	}

	in.clear();
	return in;
}

int _tmain(int argc, _TCHAR* argv[])
{ 
	//auto iostate1 = cin.rdstate();
	//cin.clear();
	////int a = 0;
	//cin >> a;
	//cin.setstate(iostate1);
	fun(cin);
	return 0;
}

