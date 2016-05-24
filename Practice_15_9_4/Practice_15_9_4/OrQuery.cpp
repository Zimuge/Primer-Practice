#include "stdafx.h"
#include "OrQuery.h"


OrQuery::OrQuery(const Query & q1,const Query & q2):BinaryQuery(q1,q2,"|")
{

}


OrQuery::~OrQuery()
{
}

QueryResult OrQuery::eval(const TextQuery & tq) const
{
	QueryResult left_result = lhs.eval(tq);
	QueryResult right_result = rhs.eval(tq);
	shared_ptr<set<size_t>> ret_lines = make_shared<set<size_t>>(left_result.begin(),left_result.end());
	ret_lines->insert(right_result.begin(), right_result.end());

	return QueryResult(BinaryQuery::rep(), ret_lines, left_result.get_file());

}

Query operator | (const Query & q1, const Query & q2)
{
	return Query(make_shared<OrQuery>(q1, q2));
}