#pragma once
#include "Query_base.h"
class BinaryQuery :
	public Query_base
{
public:
	BinaryQuery(const Query &,const Query &,const std::string & str);
    virtual ~BinaryQuery();
	//virtual QueryResult eval() = 0;
	virtual std::string rep() const;
protected:
	Query lhs, rhs;
	std::string opsym;
};

