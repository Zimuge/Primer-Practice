// Practice_17_3_2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

#include <string>
#include <regex>

using namespace std;

void pra_17_17();
void pra_17_18();
int main()
{
	pra_17_17();
	pra_17_18();
    return 0;
}

void pra_17_17()
{
	try
	{
		regex re("[[:alpha:]]*[^c]ei [[:alpha:]]*", regex::icase);
		smatch results;
		string str;
		while (cout << "please input string or enter \"q!\" to quit" << endl
			&& getline(cin,str))
		{
			if(str == "q!")
			{
				break;
			}
			
			for(sregex_iterator it(str.begin(), str.end(), re), end_it; 
				it != end_it; ++it)
			{
				size_t length = it->prefix().length();
				length = length > 40 ? length - 40 : 0;
				cout << "debug!" << endl;
				cout << it->prefix().str().substr(length) <<
					"\n\t\t >>>> " << it->str() << "<<<<\n"
					<< it->suffix().str().substr(0,40) << endl;
			}
		}

	}
	catch (regex_error error)
	{
		cout << error.what() << " " << error.code() << endl;
	}
}

void pra_17_18()
{
	try
	{
		regex re("[[:alpha:]]*[^c]ei[[:alpha:]]*", regex::icase);
		smatch results;
		string str;
		while (cout << "please input string or enter \"q!\" to quit" << endl
			&& getline(cin,str))
		{
			if(str == "q!")
			{
				break;
			}

			for(sregex_iterator it(str.begin(), str.end(), re), end_it; 
				it != end_it; ++it)
			{
				size_t length = it->prefix().length();
				length = length > 40 ? length - 40 : 0;
				cout << "debug!" << endl;
				cout << it->prefix().str().substr(length) <<
					"\n\t\t >>>> " << "the word is delete "<< "<<<<\n"
					<< it->suffix().str().substr(0,40) << endl;
				
			}
		}

	}
	catch (regex_error error)
	{
		cout << error.what() << " " << error.code() << endl;
	}

}