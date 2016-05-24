#include "stdafx.h"
#include "QueryResult.h"


QueryResult::QueryResult()
{
}

QueryResult::QueryResult(string  str, shared_ptr< set<size_t> >line_no, shared_ptr< vector<string>> fl) : word(str), lines(line_no), file(fl)
{

}

QueryResult::~QueryResult()
{
}

shared_ptr<vector<string>> QueryResult::get_file() const 
{
	return file;
}

set<size_t>::iterator QueryResult::begin() const
{
	return lines->begin();
}

set<size_t>::iterator QueryResult::end() const
{
	return lines->end();
}