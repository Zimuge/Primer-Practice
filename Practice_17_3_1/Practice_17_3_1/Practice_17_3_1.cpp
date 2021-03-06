// Practice_17_3_1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

#include <string>

#include <regex>

using namespace std;

void pra_17_14();
void pra_17_15();
int main()
{
	
	pra_17_14();
	pra_17_15();
    return 0;
}

void pra_17_14()
{

	try
	{
		string pattern = "[:alpha:]] * [^C]es$";
		regex re(pattern, regex::icase);

	}
	catch(regex_error error)
	{
		cout << error.what() << " " << error.code() << endl;
	}
}

void pra_17_15()
{
	try
	{
		string pattern = string("[[:alpha:]]*") + string("[^c]ei")+ 
			             string("[[:alpha:]]*");

		regex re(pattern, regex::icase);
		smatch result;
		string str;
		while (cout << "please input a string, enter \"q!\" to quit" << endl
			   && cin >> str)
		{
			if(str == "q!")
			{
				break;
			}

			regex_search(str, result, re);
			regex_replace(result.str(), re, "ie");
			//regex_replace()
			cout << "result " << result.str() << endl;
			cout << "str " << str << endl;
		}
	}
	catch(regex_error error)
	{
		cout << error.what() << " " << error.code() << endl;
	}
}