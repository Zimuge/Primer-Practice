// Practice_16_1_6.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "SP.h"
#include "UP.h"
using namespace std;

int main()
{
	int * p = new int(6);
	SP<int> sp(p);
	int * q = new int(9);
	UP<int> up(q);
	cout << "I am Silence and Coincidence!" << endl;
	cout << *sp << " " << *up << endl;
    return 0;
}

