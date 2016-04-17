// Practice-9.2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	vector<vector<string>> line;
	list<int> lis;
	list<deque<int>> lis1;
	vector<int> vec;
	int temp, found_value = 10;
	bool found_flag = false;
	cout << "please input the vector elements, and press ctrl + Z to end the input" << endl;
	while (cin >> temp)
	{
		vec.push_back(temp);
		cout << temp << " ";
	}

	cin.clear();
	cin.sync();  // the sentence is need for clear the buff , otherwise cin can't be executed


	cout << "please input the value you want to find " << endl;

	cin >> found_value;

	vector<int>::iterator begin = vec.begin(), end = vec.end(), found_iterator;
	
	/********************************9.4*********************/
	/*while (begin != end)
	{
		if (*begin == found_value)
		{
			found_flag = true;
			break;
		}
		++begin;
	}*/
	while (begin != end)
	{
		if (*begin == found_value)
		{
			found_flag = true;
			break;
		}
		++begin;
		
	}

	if (found_flag)
	{
		found_iterator = begin;
	}
	else
	{
		found_iterator = end;
	}

	cout << "found_flag:" << found_flag << endl;
	 
	vector<int> vec1(vec); 
	 
	return 0;
}

