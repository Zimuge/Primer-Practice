// Practice_13_4.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
using namespace std;

void test(string str);

int main()
{
	Message msg("taopeng");
	Message msg1("taopeng");
	Message msg2("taopeng");

	Folder fdr;
	Folder fdr1;
	fdr.addMsg(msg);
	fdr.addMsg(msg1);
	fdr1.addMsg(msg2);
    return 0;
}


void test(string str = " ")
{

}