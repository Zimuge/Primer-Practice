#pragma once
#include <string>
#include <iostream>


class InputString
{
public:
	InputString();
	InputString(std::istream & is) : input(is){}
	~InputString();
	std::string operator()() const;
private:
	std::istream & input;
};

