// Practice-10.2.1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <algorithm>
#include <numeric>
#include <vector>
#include <iostream>

using namespace std;
void pra_10_3(void);
int _tmain(int argc, _TCHAR* argv[])
{
	pra_10_3();
	return 0;
}

void pra_10_3(void)
{
	vector<double> vec_int;
	int temp, sum = 0;
	cout << "please input the elements of the vector" << endl;
	while (cin >> temp)
	{
		vec_int.push_back(temp);



	}
	sum = accumulate(vec_int.begin(), vec_int.end(), static_cast<int>(0));
	cout << sum << endl;
}