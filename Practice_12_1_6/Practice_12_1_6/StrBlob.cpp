#include "stdafx.h"
#include "StrBlob.h"


StrBlob::StrBlob() : data(make_shared<vector<string>>())
{
}


StrBlob::~StrBlob()
{
}


StrBlob::StrBlob(initializer_list<string> lst) : data(make_shared<vector<string>>(lst))
{	
}

void StrBlob::pop_back()
{

}

string & StrBlob::front()
{
	check(0, "fornt on empty vector");
	return data->front();
}

string & StrBlob::back()
{
	check(0, "back on empty vector");
	return data->back();
}

const string & StrBlob::front() const
{
	check(0, "fornt on empty vector");
	return data->front();
}

const string & StrBlob::back() const
{
	check(0, "back on empty vector");
	return data->back();
}

void StrBlob::check(size_type i, const string & msg) const
{
	if (i >= data->size())
	{
		throw out_of_range(msg);
	}
}