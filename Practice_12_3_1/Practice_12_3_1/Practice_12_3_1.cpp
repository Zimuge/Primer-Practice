// Practice_12_3_1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


void runQueries(ifstream & file);

int _tmain(int argc, _TCHAR* argv[])
{
	ifstream input("words.txt");
	if (!input)
	{
		cout << "can't opened file" << endl;
	}
	else
	{
		runQueries(input);
	}
	

	return 0;
}


ostream &print(ostream &out, const QueryResult & result)
{
	shared_ptr<set<size_t>> sp = result.lines.lock();
	shared_ptr<vector<string>> vec_sp = result.file.lock();
	try
	{

		if (!vec_sp)
		{
			throw runtime_error("memory has been destroied");
		}
		else
		{
			out << result.word << " occurs" << " " << sp->size() << " times" << endl;
			set<size_t>::iterator iter1 = sp->begin();
			while (iter1 != sp->end())
			{
				cout << "（line " << *iter1 << ") " << vec_sp->at(*iter1) << endl;
				++iter1;
			}
		}
	}
	catch (runtime_error err)
	{
		cout << err.what() << endl;
		cout << "run the programa again" << endl;
	}

	return out;
}


void runQueries(ifstream & file)
{
	TextQuery  TQ(file);
	while (1)
	{
		cout << "please intput the word to query or q to quit" << endl;
		string str;
		if (!(cin >> str) || str == "q")
			break;
		else
		{
			print(cout, TQ.query(str)) << endl;
		}
	}
}
