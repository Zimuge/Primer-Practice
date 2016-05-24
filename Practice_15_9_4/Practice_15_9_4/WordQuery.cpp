#include "stdafx.h"
#include "WordQuery.h"


WordQuery::WordQuery()
{
}

WordQuery::WordQuery(const std::string str):query_word(str)
{
	
}


WordQuery::~WordQuery()
{
}

QueryResult WordQuery::eval(const TextQuery & tq) const
{
	return tq.query(query_word);
}

std::string WordQuery::rep() const
{
	return query_word;
}