#pragma once
#ifndef STRBLOB_H

#define STRBLOB_H



#include <vector>
#include <string>
#include <memory>

using namespace std;
extern class StrBlobPtr;
class StrBlob
{
public:
	friend class StrBlobPtr;
	typedef vector<string>::size_type size_type;
	StrBlob(initializer_list<string> lst);
	size_type size() const { return data->size(); } 
	bool empty() const { return data->empty(); }
	void push_back(const string & str) { data->push_back(str); }
	void pop_back();
	string & front();
	string & back();
	const string & front() const;
	const string & back() const;

	StrBlobPtr begin();

	StrBlob();
	~StrBlob();
	
	shared_ptr<vector<string>> data;
	void check(size_type i,const string & msg) const;

};

#endif