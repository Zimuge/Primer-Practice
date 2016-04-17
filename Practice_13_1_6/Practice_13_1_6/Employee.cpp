#include "stdafx.h"
#include "Employee.h"


unsigned int Employee::count = 0;

Employee::Employee():name(string()), ID(count++)
{
	cout << name << " " << ID << endl;
}


Employee::~Employee()
{
}

Employee::Employee(string str):name(str), ID(count++)
{
	cout << name << " " << ID << endl;
}

Employee::Employee(const Employee & em):name(em.name),ID(count++)
{
	cout << name << " " << ID << endl;
}

Employee & Employee::operator = (const Employee & em)
{
	name = em.name;
	cout << name << " " << ID << endl;
	return *this;
}