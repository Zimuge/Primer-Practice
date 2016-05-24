#include "stdafx.h"
#include "if_then_else.h"


if_then_else::if_then_else()
{
}


if_then_else::~if_then_else()
{
}


int if_then_else::operator()(int a, int b, int c)
{
	if(a)
	{
		return b;
	}
	else
	{
		return c;
	}

}