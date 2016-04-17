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
	QueryResult(string str, weak_ptr< set<size_t> >lien_no, weak_ptr< vector<string>> fl);
	~QueryResult();
private:
	string word;
	weak_ptr< set<size_t>>  lines;
	weak_ptr< vector<string> > file;
};


#endif