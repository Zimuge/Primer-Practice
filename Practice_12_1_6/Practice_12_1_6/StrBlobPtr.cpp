#include "stdafx.h"
#include "StrBlobPtr.h"



StrBlobPtr::StrBlobPtr()
{
}


StrBlobPtr::~StrBlobPtr()
{
}

string & StrBlobPtr::deref()  const
{
	shared_ptr<vector<string>>  sp = check(curr, "dereference past end");
	if (sp);
	return (*sp)[curr];
}

StrBlobPtr & StrBlobPtr::incr()
{
	shared_ptr<vector<string>> sp = check(curr, "increment past the end");
	++curr;
	return *this;
}

shared_ptr<vector<string>> StrBlobPtr::check(size_t sz, const string &msg) const
{
	shared_ptr<vector<string>> sp = wp.lock();
	if (!sp)
	{
		throw runtime_error("no vector");
	}
	
	if (sz >= sp->size())
	{
		throw out_of_range("msg");
	}
	return sp;
}