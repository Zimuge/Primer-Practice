// Practice_10.4.2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <fstream>

#include <vector>
#include <string>
#include <iterator>

#include <numeric>
#include <functional>
#include <algorithm>

using namespace std;
void pra_10_29();
void pra_10_30();
void pra_10_31();
void pra_10_33(string infile, string out_file1, string out_file2);

void test();
int _tmain(int argc, _TCHAR* argv[])
{
	/***********************for test***********/
	
	//test();
   //pra_10_29();
	//pra_10_30();
	//pra_10_31();
	pra_10_33("int_value.txt", "odd.txt", "even.txt");
	return 0;
}

void pra_10_29()
{
	vector<string> vec_str;
	ifstream input("data.txt");
	istream_iterator<string> if_iter(input), if_eof;
	if (input)
	{
		cout << "open the file" << endl;
	
		while (if_iter != if_eof)
		{
			vec_str.push_back(*if_iter);
		//	cout << "read the data" << endl;
			++if_iter;
		}
	}
	else
	{
		cout << "can't open the file" << endl;
	}

	
}

void pra_10_30()
{
	vector<int> vec_int;
	auto insert = back_inserter(vec_int);
	vector<int>::iterator iter;

	cout << "please input int value" << endl;
	istream_iterator<int> cin_iter(cin), cin_eof;
	ostream_iterator<int> cout_iter(cout, " ");
	
	
	copy(cin_iter, cin_eof, insert);
	sort(vec_int.begin(), vec_int.end());

	iter = vec_int.begin();
	while (iter != vec_int.end())
	{
		*cout_iter = *iter;
		++iter;
	}
	cout << endl;

}

void pra_10_31()
{
	vector<int> vec_int;
	auto insert = back_inserter(vec_int);
	vector<int>::iterator iter;

	cout << "please input int value" << endl;
	cin.clear();
	cin.sync();
	istream_iterator<int> cin_iter(cin), cin_eof;
	ostream_iterator<int> cout_iter(cout, " ");


	while (cin_iter != cin_eof)
	{
		*insert = *cin_iter++;
	}
	cout << endl;
	

	sort(vec_int.begin(), vec_int.end());
	unique_copy(vec_int.begin(), vec_int.end(), cout_iter);

}

void pra_10_33(string infile,string out_file1,string out_file2)
{
	ifstream input(infile);
	istream_iterator<int> if_iter(input),eof;

	ofstream outputeven(out_file2), outputodd(out_file1);
	ostream_iterator<int> couteven_iter(outputeven," ");
	ostream_iterator<int> coutodd_iter(outputodd," ");

	while (if_iter != eof)
	{
		if (*if_iter % 2)
		{
			*coutodd_iter = *if_iter++;
		}
		else
		{
			*couteven_iter = *if_iter++;
		}
		
	}





}
void test()
{
	istream_iterator<int> iter(cin), end;
	ostream_iterator<int> out_iter(cout, "\n");
	while (iter != end)
	{
		cout << *iter << ' ';
		++iter;
	}
	//copy(iter, end, out_iter);
	*out_iter = accumulate(iter, end, 0);
}