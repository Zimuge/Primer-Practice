#include "stdafx.h"
#include "QueryResult.h"


QueryResult::QueryResult()
{
}

QueryResult::QueryResult(string  str, weak_ptr< set<size_t> >line_no, weak_ptr< vector<string>> fl) : word(str), lines(line_no), file(fl)
{

}

QueryResult::~QueryResult()
{
}
