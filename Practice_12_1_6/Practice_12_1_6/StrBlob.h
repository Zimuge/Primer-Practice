#pragma once
#include <vector>
#include <string>
#include <memory>

class StrBlobPtr;
using namespace std;

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
	StrBlob();
	~StrBlob();
private:
	shared_ptr<vector<string>> data;
	void check(size_type i,const string & msg) const;

};

