// Practice-9.5.2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;
/****************************9.43**********************************/
string fun(string & s, const string & oldVal,const string & newVal);

/****************************9.42**********************************/
string fun1(string & s, const string & oldVal, const string & newVal);
int _tmain(int argc, _TCHAR* argv[])
{
	string s, oldVal, newVal;
	cout << "please input a string" << endl;
	cin >> s;
	cout << "please input a string to replace" << endl;
	cin >> oldVal;
	cout << "please input a string for replace" << endl;
	cin >> newVal;
	//fun(s, oldVal, newVal);
	fun1(s, oldVal, newVal);
	cout << s;
	return 0;
}

/****************************9.43************/
string fun(string  & s, const string & oldVal, const string & newVal)
{
	string::iterator iter = s.begin() ,iter1 = s.begin();
	while ((unsigned int )(s.end() - iter1) >= oldVal.size()) // ��������β�����������ַ�������Ҫ���ڵ���oldVal�ĳ���
	{
		string sub_str = s.substr(iter1 - iter, oldVal.size());
		if (sub_str == oldVal)
		{
			/****************************9.43************/
			iter1 = s.erase(iter1, iter1 + oldVal.size());// ���� s ���� oldVal ��ͬ�Ĵ�
			iter1 = s.insert(iter1, newVal.begin(),newVal.end()); // ʹ��insert ���� newVal, ��Χ����
			iter1 += newVal.size();
			iter = s.begin();
		}
		else
		{
			iter1++;
		}

	}
	return s;
}


string fun1(string & s, const string & oldVal, const string & newVal)
{
	unsigned int index = 0;
	string temp;
	while (index <= (s.size() - oldVal.size()))
	{
		temp = s.substr(index, oldVal.size());
		if (temp == oldVal)
		{
			s.replace(index, oldVal.size(), newVal);
			index += newVal.size();
		}
		else
		{
			index++;
		}
	}
	return s;
}