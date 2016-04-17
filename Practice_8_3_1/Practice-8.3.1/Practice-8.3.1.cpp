// Practice-8.3.1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	/*     8.3.1         */
    /* ifstream input("data.txt");
	string line, word;
	vector<string> vec,vec1;
	if (input)
	{
		cout << "open file successfully" << endl;
		while (getline(input, line))
		{
			vec.push_back(line);
			istringstream in(line);
			cout << line << endl;
			while (in >> word)
			{
				vec1.push_back(word);
				cout << word << " ";
			}
			cout << endl;
		}
	}
	else
	{
		cout << "open file failed" << endl;
	}
	 
	input.close();
	
	*/

	/************************for    test ***********************/
	ifstream input("data.txt"); // when we read data from file, we need tie the object to a file
	//ofstream output("text.txt", ofstream::app);//located to the tail of the file when every time we write the file for protect 
	// the contents write before
	ofstream output("text.txt");
	string str;
	if (input)
	{
		while (input >> str)// read data from file ;
		{
			
			
			if (output)
			{
				
				output << str << " ";// output data to file;
			}
			else
			{
				cout << "write file failed" << endl;
			}
			
			
		}
	}
	else
	{
		cout << "open file failed" << endl;
	}
	input.close();
	output.close();
	return 0;
}

