// Practice_16_5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

using namespace std;

template<typename T>
unsigned int  count(T  val, vector<T> & vec_t)
{
	unsigned int num = 0;
	auto iter = vec_t.begin();
	while (iter != vec_t.end())
	{
		if (val == *iter)
		{
			num++;
		}
		++iter;
	}
	return num;
}

template <>
unsigned int count(const char* p_char, vector<const char *> & vec_p_char)
{
	unsigned int num = 0;
	auto iter = vec_p_char.begin();
	while(iter != vec_p_char.end())
	{
		if(strcmp(p_char,*iter) == 0)
		{
			num++;
		}
		++iter;
	}
	return num;
}


void pra_16_63();
int main()

{
	int * p = new int(42);
	pra_16_63();
	cout << sizeof(int) << " " << sizeof(p) << endl;
    return 0;
}


void pra_16_63()
{
	vector<int> vec_int = { 1,2,2,3,4,5,6 };
	vector<double> vec_dou = { 1.0,2.0,2.0,2.0,3.0,3.1,3.2 };
	vector<string> vec_str = { "1","2","2","2","2","3","4","5" };
	vector<const char *> vec_p_char = { "12","22","22","22","22","22","3","4","5" };
	cout << count(2, vec_int) << " " << count(2.0, vec_dou) << " "
		<< count(string("2"), vec_str) << " "<< count("22",vec_p_char) << endl;
}