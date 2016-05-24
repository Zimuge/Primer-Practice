#pragma once
#ifndef TEXTQUERY_H
#define TEXTQUERY_H

#include "stdafx.h"
using namespace std;

class QueryResult;
class TextQuery
{
public:
	TextQuery();
	TextQuery(ifstream & file_input);
	QueryResult query(const string &) const;// return the QueryResult 
	~TextQuery();
private:
	shared_ptr<vector<string>> file;
	shared_ptr< map< string, shared_ptr< set<size_t>  > > > word_lines;
};

#endif