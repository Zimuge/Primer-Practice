// Practice5.17.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	vector<int> v1;
	vector<int> v2;
	cout << "please input  V1" << endl;
	int a = 0;
	for(int i = 0; i < 5; i ++)
	{
		cin >> a;
		v1.push_back(a);
	}
	
	cout << "please input  V2" << endl;

	for (int i = 0; i < 7; i++)
	{
		cin >> a;
		v2.push_back(a);
	}

	decltype (v1.size()) size_of_v1 = v1.size();
	decltype (v1.size()) size_of_v2 = v2.size();
	bool equal = false;
	auto v1_iter = v1.begin(), v2_iter = v2.begin();
	if (size_of_v1 <= size_of_v2)
	{
		for (; (v1_iter != v1.end()) && (*v1_iter == *v2_iter); ++v1_iter, ++v2_iter);
		if ((v1.begin() == v1.end()) || (v1_iter != v1.end()))
		{
			equal = false;
		}
		else
		{
			equal = true;
		}
		
	}
	else
	{
		for (; (v2_iter != v2.end()) && (*v1_iter == *v2_iter); ++v1_iter, ++v2_iter);
		if ((v2.begin() == v2.end()) || (v2_iter != v2.end()))
		{
			equal = false;
		}
		else
		{
			equal = true;
		}
	}

	cout << "v1 and v2 is equal or not :" << equal << endl;
	
	return 0;
}

