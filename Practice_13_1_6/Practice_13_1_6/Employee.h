#pragma once
#include "stdafx.h"

using namespace std;
class Employee
{
public:
	Employee();
	Employee(string str);
	Employee(const Employee &);
	Employee & operator = (const Employee &);
	~Employee();
private:
	// the name of the employee
	string name;
	// the ID of the employee
	unsigned int ID;
	// using for counting the employee
	static unsigned int count;
};

