#pragma once
#include "stdafx.h"

class StrVec
{
public:
	/******************** Constructor **************/

	       // default constructor
	       StrVec();
		   //copy constructor
		   StrVec(const StrVec &);
    /******************** Member function **********/
		   void push_back(const std::string &);
		   size_t size() const;
		   size_t capacity() const;
		   std::string * begin() const;
		   std::string * end()   const;
		   void resize(size_t sz, const std::string str);

	/******************** Operator ****************/
		   StrVec & operator = (const StrVec &);
		   StrVec & operator = (std::initializer_list<std::string>);
	       std::string & operator[](size_t n) &;
		   const std::string & operator[](size_t n) const &&;

	/******************** Deconstructor ***********/	   
		   ~StrVec();
private:
	std::allocator<std::string> allo;

	// pointer point to first element
	std::string * elements;
	// pointer point to the first free memory 
	std::string * first_free;
	// pointer point to the memory's end
	std::string * end_free;
	void free();
	
	void chk_n_alloc();
	void reallocate();
	std::pair<std::string *, std::string *> alloc_n_copy(const std::string *, const std::string *) ;
	

};

