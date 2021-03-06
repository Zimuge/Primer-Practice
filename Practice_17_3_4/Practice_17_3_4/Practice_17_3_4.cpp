// Practice_17_3_4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

#include <string>

#include <regex>


using namespace std;
using namespace std::regex_constants;
void pra_17_25();
void pra_17_26();
void pra_17_27();
int main()
{
	//pra_17_25();
	pra_17_27();
    return 0; 
}



void pra_17_25()
{
	try
	{ 
		cout << "pra_17_25()" << endl;
		string patern = "(\\()?(\\d{3})(\\))?([-. ])?(\\d{3})([-. ])?(\\d{4})";
		regex re(patern);
		string fmt = "$2.$5.$7 ";
		smatch results;
		string str;
		while (cout << "please input a strig or q! to quit" << endl
			&& getline(cin, str))
		{
			if (str == "q!")
			{
				break;
			}
			
			string temp, temp2;
			insert_iterator<string> inst(temp, temp.begin());
			insert_iterator<string> inst2(temp2, temp2.begin());
			regex_replace(inst, str.begin(), str.end(), re, fmt, format_no_copy);
			regex_replace(inst2, temp.begin(), temp.end(), re, fmt, format_first_only);
			cout << temp2;
		}
	}
	catch(regex_error e)
	{
		cout << e.what() << " " << e.code() << endl;
	}
}


void pra_17_26()
{
	
}

void pra_17_27()
{
	cout << "pra_17_27()" << endl;
	try
	{
		string patern = "(\\d{5})(-)?(\\d{4})?";
		regex re(patern);
		smatch matchResults;
		string line;
		string fmt = "$1-$3 ";
		string fmt1 = "$1 ";
		while (cout << "please input a string or q! to quit " << endl
			&& getline(cin,line))
		{
			if(line == "q!")
			{
				break;
			}
			sregex_iterator it(line.begin(), line.end(), re), end_it;
			for(;it != end_it; ++it)
			{
				if ((*it)[3].matched && (*it)[1].matched)
					cout << it->format(fmt) << endl;
				else if((*it)[1].matched && !((*it)[3].matched))
				{
					cout << it->format(fmt1) << endl;
				}
			}
		}
	}
	catch(regex_error e)
	{
		cout << e.what() << " " << e.code() << endl;
	}
	
}