// Practice-7.4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Person.h"

using std::cin;
using std::cout;
using std::string;


int _tmain(int argc, _TCHAR* argv[])
{
	Person person;
	Person person1;
	person.Read(cin, person1);
	person.Print(cout, person1);
	return 0;
}

