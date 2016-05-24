#include "stdafx.h"
#include "BinaryQuery.h"


BinaryQuery::BinaryQuery(const Query & q1,const Query & q2,const std::string & str):lhs(q1),rhs(q2),opsym(str)
{

}


BinaryQuery::~BinaryQuery()
{

}

std::string BinaryQuery::rep() const
{
	return "(" + lhs.rep() + " " + opsym + " " + rhs.rep() + ")";
}