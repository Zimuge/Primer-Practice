// Practice_17_1_1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <sstream>

#include <vector>
#include <string>
#include <list>

#include <map>
#include <set>

#include <unordered_map>
#include <unordered_set>

#include <iterator>
#include <utility>

#include <algorithm>
#include <functional>
#include <numeric>


using namespace std;
int main()
{
	tuple<int, int, int> tuple3Int(10, 20, 30);
	tuple<string, vector<string>, pair<string, int>> item("string", { "vector","string" }, { "pair_string",3 });
	size_t size = tuple_size<decltype(tuple3Int)>::value;
	cout << get<0>(tuple3Int) << " " << get<1>(tuple3Int) 
		 << " " << get<2>(tuple3Int) << endl;

	cout << get<0>(item) << " " << get<1>(item)[0] << " " 
		 << get<1>(item)[1]  << " " << get<2>(item).first 
		 <<  " "<<  get<2>(item).second << endl;



    return 0;
}

