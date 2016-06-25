// Practice_16_1_1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

using namespace std;

template<typename T>
int compare(const T & value_1, const T & value_2)
{
	if(value_1 < value_2)
	{
		return 1;
	}
	if(value_2 < value_1)
	{
		return -1;
	}
	return 0;
}

template<typename T, typename T1>
T my_find( const T & begin, const T & end,const T1 & value)
{
	T iter = begin;
	while(iter != end)
	{
		if(*iter == value)
		{
			return iter;
		}
		++iter;
	}
	return end;
}

template <typename T ,unsigned int N>
ostream & print(ostream & out ,const T (&arr) [N])
{
	unsigned int n = 0;
	while(n < N)
	{
		out << arr[n] << " ";
		++n;
	}
	return out;
}

template<typename T,unsigned int N>
constexpr unsigned int mysize(const T (&arr) [N])
{
	return N;
}
void pra_16_2();
void pra_16_4();
void pra_16_5();
void pra_16_7();

int main()
{
	//pra_16_2();
	//pra_16_4();
	//pra_16_5();
	pra_16_7();
	
    return 0;
}

void pra_16_2()
{
	cout << compare(1, 2) << " " << compare(string("str"), string("str1")) << endl;
}

void pra_16_4()
{
	vector<int> vec_int = { 1,2,3,4,5,6,7,8,9 };
	list<string> lst_str = { "hah","tp","taopeng","taosonglin","coincidence" };
	vector<int>::iterator iter = (my_find(vec_int.begin(), vec_int.end(), 3));
	list<string>::iterator iter_1 = (my_find(lst_str.begin(), lst_str.end(), string("coincidence")));
	if(iter != vec_int.end())
	{
		cout << *iter << endl;
	}
	else
	{
		cout << "can't find the value" << endl;
	}

	if(iter_1 != lst_str.end())
	{
		cout << *iter_1 << endl;

	}
	else
	{
		cout << "can't find the value" << endl;
	}

}

void pra_16_5()
{
	int arr[11] = { 1,2,3,4,5,6,7,8,9,0 };
	print(cout, arr);
}

void pra_16_7()
{
	int arr[14] = { 1,2,3,4,5,6,7,8,9,0 };
	cout << mysize(arr);
}