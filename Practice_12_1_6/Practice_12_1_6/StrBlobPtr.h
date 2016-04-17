#pragma once
#ifndef STRBLOBPTR_H

#define STRBLOBPTR_H
#include <iostream>


#include <vector>
#include <string>

#include <memory>

using namespace std;

class StrBlob;
class StrBlobPtr
{
public:
	StrBlobPtr();
	StrBlobPtr(StrBlob & a, size_t sz = 0);
	
	string & deref() const;
	StrBlobPtr & incr();
	~StrBlobPtr();
private:

	shared_ptr<vector<string>> check(size_t size,const string & msg) const;
	weak_ptr<vector<string>> wp;
	size_t curr;
};

#endif
