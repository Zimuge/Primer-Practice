// Practice_12_1_5.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

#include <memory>


using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int ix = 1024, *pi = &ix, *pi2 = new int(2048);
	typedef unique_ptr<int> Intp;
	//Intp p0(ix);
	//Intp p1(pi);
	Intp p2(pi2);
	//Intp p3(pi2);
	//Intp p3(&ix);
	Intp p4(new int(2048));
	//Intp p5(p2.get());
	return 0;
}

