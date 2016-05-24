#pragma once
#include "Query_base.h"
class Query
{
public:
	// the operator of Query 
	friend Query operator &(const Query &, const Query &);
	friend Query operator |(const Query &, const Query &);
	friend Query operator ~(const Query &);
	
	
	// the connector 
	QueryResult eval(const TextQuery &) const;
	std::string rep() const;

	// the constructor
	Query(const std::string &);

	// the discontructor
	~Query();
private:
	Query(std::shared_ptr<Query_base> query);
	std::shared_ptr<Query_base> q;
};

