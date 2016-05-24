#pragma once
#include "Query_base.h"
class WordQuery : 
	public Query_base
{
	friend class Query;
public:
	
	WordQuery();
	WordQuery(const std::string);
	virtual ~WordQuery();
private:
	std::string query_word;
	virtual QueryResult eval(const TextQuery & tq) const override;
	virtual std::string rep() const override;
};

