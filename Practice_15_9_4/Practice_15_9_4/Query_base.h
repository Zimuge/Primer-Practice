#pragma once
#include "stdafx.h"
class Query_base
{
public:
	friend class Query;
	Query_base();
	
protected:
	using line_no = std::size_t;
	virtual  ~Query_base() = default;
private:
	virtual QueryResult  eval(const TextQuery&) const = 0;
	virtual std::string  rep() const = 0;
};

