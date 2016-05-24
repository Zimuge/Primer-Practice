#pragma once
#ifndef QUERYRESULT_H
#define	QUERYRESULT_H
#include "stdafx.h"

using namespace std;


class QueryResult
{
	friend ostream & print(ostream &, const QueryResult &);
public:
	QueryResult();
	QueryResult(string str, shared_ptr< set<size_t> > lien_no, shared_ptr< vector<string>> fl);
	~QueryResult();
	shared_ptr<vector<string>> get_file() const;
	set<size_t>::iterator begin() const;
	set<size_t>::iterator end() const;
private:
	string word;
	shared_ptr< set<size_t>>  lines;
	shared_ptr< vector<string> > file;
};


#endif