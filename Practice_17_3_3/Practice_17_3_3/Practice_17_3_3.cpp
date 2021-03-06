// Practice_17_3_3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <iostream>

#include <string>
#include <vector>


#include <regex>

using namespace std;

using namespace std::regex_constants;

void pra_17_20();
void pra_17_22();
void pra_17_23();


int main()
{
	//pra_17_20();
	//pra_17_22();
	pra_17_23();
    return 0;
}

void pra_17_20()
{
	cout << "pra_17_20()" << endl;
	try
	{

		string patern = "(\\()?(\\d{3})(\\))?([-. ])?(\\d{3})([-. ])?(\\d{4})";
		string fmt = "$2.$5.$7";
		regex re(patern);
		smatch result;
		string str;
		while (cout << "please input phone number or enter q! to quit \n" &&
			getline(cin, str))
		{
			if (str == "q!")
			{
				break;
			}
			sregex_iterator it(str.begin(), str.end(), re), end_it;
			for (; it != end_it; ++it)
			{
				cout << it->str() << endl;
			}
		}
	}
	catch(regex_error e)
	{
		cout << e.what() << " " << e.code() << endl;
	}

}

void pra_17_22()
{
	cout << "pra_17_22()" << endl;
	try
	{

		string patern = "(\\()?(\\d{3})(\\))?([-.]|(\\s)*)?(\\d{3})([-.]|(\\s)*)?(\\d{4})";
		string fmt = "$2.$6.$9\n";
		regex re(patern);
		smatch result;
		string str;
		while (cout << "please input phone number or enter q! to quit \n" &&
			getline(cin, str))
		{
			if (str == "q!")
			{
				break;
			}
			//sregex_iterator it(str.begin(), str.end(), re), end_it;
			//for (; it != end_it; ++it)
			//{
				string temp;
				insert_iterator<string> instr = inserter(temp, temp.end());
				regex_replace(instr, str.begin(),str.end(), re, fmt);
				cout << temp << endl;
			//}
		}
	}
	catch(regex_error e)
	{
		cout << e.what() << " " << e.code() << endl;
	}

}

void pra_17_23()
{
	cout << "pra_17_23()" << "\n";
	string patern = "(\\d{5})(-)?(\\d{4})?";
	regex re(patern);
	smatch results;
	string str;
	try
	{
		while (cout << "please input a string or q! to quit!" << endl
		&& getline(cin, str))
		for(sregex_iterator it(str.begin(),str.end(),re),end_it; 
			it != end_it; ++it)
		{
			cout << it->str() << endl;
		}
	}
	catch(regex_error e)
	{
		cout << e.what() << " " << e.code() << endl;
	}
}