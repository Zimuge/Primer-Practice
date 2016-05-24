#pragma once
#include "BinaryQuery.h"
class AndQuery :
	public BinaryQuery
{
	friend Query operator & (const Query &,const Query &);
public:
	AndQuery(const Query &q1,const Query &q2);
	virtual QueryResult eval(const TextQuery &) const override;
	virtual ~AndQuery();
};

