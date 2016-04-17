#include "stdafx.h"
#include "Screen.h"


Screen::Screen()
{
}

Screen::Screen(pos hei, pos wid)

{
	height = hei;
	width = wid;
	cursor = 0;
	contents[cursor] = 0;
}

Screen::Screen(pos hei, pos wid, char c)
{
	height = hei;
	width = wid;
	cursor = 0;
	contents[cursor] = c;
}

Screen::~Screen()
{
}
