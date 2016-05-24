#pragma once
#include "BinaryQuery.h"
class OrQuery :
	public BinaryQuery
{
	friend Query operator | (const Query &, const Query &);
public:
	OrQuery(const Query &,const Query &);
	virtual ~OrQuery();
	virtual QueryResult eval(const TextQuery &) const override;
private:
	std::string not_query;
};

