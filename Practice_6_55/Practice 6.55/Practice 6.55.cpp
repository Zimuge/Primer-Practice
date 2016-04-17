// Practice 6.55.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "vector"
#include "iostream"

using namespace std;

int fun(int, int);
int add(int, int);
int minu(int, int);
int times(int, int);
int divider(int, int);

typedef decltype(fun)  * pf;

using  pff = int(*) (int, int);


 

int _tmain(int argc, _TCHAR* argv[])
{
	vector<pf>  vec;
	vector<pff> vec1;
	vec1.push_back(add);
	vec1.push_back(minu);
	vec1.push_back(times);
	vec1.push_back(divider);
	int a = 8; 
	int b = 2;
	auto t = vec1.begin();
	vector<pff>::iterator  end = vec1.end();
	for(t = vec1.begin(); t != end; ++t)
	{
		cout << (*t)(a,b) << '\n';
	}
	return 0;
}



int fun(int a, int b)
{

	return b;
}

int add(int a, int b)
{
	return (a + b);
}

int minu(int a,int b)
{
	return  (a - b);
}

int times(int a, int b)
{
	return a*b;
}

int divider(int a, int b)
{
	return a / b;
}