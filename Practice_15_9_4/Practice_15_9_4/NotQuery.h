#pragma once
#include "Query_base.h"
class NotQuery :
	public Query_base
{
	friend Query operator ~(const Query &);
public:
//	NotQuery();
	NotQuery(const Query &);
	virtual ~NotQuery();
private:
	virtual QueryResult eval(const TextQuery &) const override;
	virtual std::string rep() const override;
	Query query;
};

