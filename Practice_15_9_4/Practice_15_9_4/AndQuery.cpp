#include "stdafx.h"
#include "AndQuery.h"


AndQuery::AndQuery(const Query & q1,const Query &q2):BinaryQuery(q1,q2,"&")
{

}


AndQuery::~AndQuery()
{
}

Query operator & (const Query &lhs, const Query &rhs)
{
	return Query(make_shared<AndQuery>(lhs, rhs));
}

QueryResult AndQuery::eval(const TextQuery & tq) const 
{
	QueryResult left_result = lhs.eval(tq);
	QueryResult right_result = rhs.eval(tq);
	shared_ptr<set<size_t>> ret_lines = make_shared<set<size_t>>();
	insert_iterator<set<size_t>>  ins = inserter(*ret_lines, ret_lines->begin());
	set_intersection(left_result.begin(), left_result.end(), right_result.begin(), right_result.end(), ins);
	return QueryResult(BinaryQuery::rep(), ret_lines, left_result.get_file());
}