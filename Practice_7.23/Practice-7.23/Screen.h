#pragma once
#include <string>
#include <iostream>
using namespace std;
class Screen
{
public:
	using pos = string::size_type;
	Screen();
	Screen(pos hei,pos width);
	Screen(pos hei, pos width, char c);
	virtual ~Screen();
	
private:
	pos height;
	pos width;
	string contents;
	pos cursor;

	
	
};

