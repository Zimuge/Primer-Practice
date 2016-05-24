#include "stdafx.h"
#include "Query.h"


Query::Query(const std::string & str):q(new WordQuery(str))
{
	
}


Query::Query(std::shared_ptr<Query_base> query):q(query)
{
	
}

Query::~Query()
{
}

QueryResult Query::eval(const TextQuery & tq) const 
{
	return q->eval(tq);
}

std::string Query::rep() const 
{
	return q->rep();
}

