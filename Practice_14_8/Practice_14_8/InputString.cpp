#include "stdafx.h"
#include "InputString.h"
#include<iostream>
#include<string>


InputString::InputString():input(std::cin)
{

}


InputString::~InputString()
{
}

std::string InputString::operator()() const
{
	std::string str;
	std::cout << "please input a string " << std::endl;
	std::getline(input, str);
	if(input)
	{
		return str;
	} 
	else
	{
		return "";
	}
}
	