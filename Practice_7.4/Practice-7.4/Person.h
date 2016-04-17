#pragma once
#include <string>
#include <iostream>
using namespace std;

class Person
{
private :
	string name;
	string addr;
	static double item;
	static double item1;
public:
	Person();
	explicit Person(istream & in);
	Person(const string & str1, const string & str2);
	string Get_Name(void) const { return name; }
	string Get_Addr(void) const { return addr; }
	istream & Read(istream & in,Person & person);
	ostream & Print(ostream & out, Person &person);
	virtual ~Person();
};

