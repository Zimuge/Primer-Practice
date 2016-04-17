#include "stdafx.h"
#include "TextQuery.h"


TextQuery::TextQuery()
{
}

TextQuery::TextQuery(ifstream & file_input)
{
	file = make_shared<vector<string>>();// allocate a memory for vector
	word_lines = make_shared< map< string, shared_ptr< set< size_t > > > >(); // allocate  a memory for map

	string line; // use to save the line  inputed
	string  word;// save word inputed from the line;
    
	size_t  line_num = 0;
	while (getline(file_input, line))
	{
		file->push_back(line);
		istringstream string_input(line);
		while (string_input >> word)
		{
			auto iter = word_lines->find(word);// to find the word in map

			if (iter == word_lines->end()) // if the word appear for the first time
			{
				shared_ptr< set<size_t> > set_sp = make_shared < set<size_t>>();// we need to allocate the set a memory
				set_sp->insert(line_num);// we need insert the keyvalue
				word_lines->insert({ word, set_sp });// then we insert pair to the map
			}
			else
			{
				iter->second->insert(line_num);// if the word has appeared before, we just need to insert value to the set
			}
		}
		line_num++;
		
		
	}
}

QueryResult TextQuery::query(const string & str) const
{
	string QR_str = str;// string for construct QueryResult
	weak_ptr<set<size_t>> QR_lines;
	auto iter = word_lines->find(str);
	if (iter != word_lines->end())
	{
		QR_lines = iter->second;
	}
	else
	{
		cout << "can't find the word" << endl;
	}

	return QueryResult(QR_str, QR_lines, weak_ptr<vector<string>> (file));

}


TextQuery::~TextQuery()
{
}

