#include "stdafx.h"
#include "Function.h"


int sum(std::initializer_list<int> lst)
{
	int sum = 0;
	for (const int &a : lst)
		sum += a;
	return sum;
}
