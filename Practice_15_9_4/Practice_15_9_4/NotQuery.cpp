#include "stdafx.h"
#include "NotQuery.h"




NotQuery::NotQuery(const Query & q):query(q)
{
	
}

NotQuery::~NotQuery()
{
}

QueryResult NotQuery::eval(const TextQuery & tq) const
{
	QueryResult result = query.eval(tq);
	set<size_t>::iterator iter1 = result.begin(), iter2 = result.end();

	// get the line number of the text
	size_t sz = (result.get_file())->size();
	
	// use to store the not results;
	shared_ptr<set<size_t>> ret_lines = make_shared<set<size_t>>();
	for(unsigned int i = 0; i < sz; i++)
	{
		if(iter1 != iter2)// 画出文本出现的行和文本，按图索骥,按实物写逻辑比自己抽象的想象要简单
		{
			if(*iter1 != i)
			{
				ret_lines->insert(i);
			}
			else
			{
				++iter1;
			}
			
		}
		else
		{
			ret_lines->insert(i);
		}
	}
	return QueryResult(rep(), ret_lines, result.get_file());

}

Query operator ~(const Query & q)
{
	return Query(make_shared<NotQuery>(q));
}

std::string NotQuery::rep() const
{
	return "~(" + query.rep() + ")";
}