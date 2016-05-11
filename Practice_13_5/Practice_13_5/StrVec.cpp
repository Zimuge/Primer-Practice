#include "stdafx.h"
#include "StrVec.h"
#define D_SCL_SECURE_NO_WARNINGS
using std::allocator;
using std::pair;
using std::string;
/****************** construtor ***************/
//default constructor
StrVec::StrVec():elements(nullptr),first_free(nullptr),end_free(nullptr)
{

}
//copy constructor
StrVec::StrVec(const StrVec & str_vec)
{
	pair<string *, string *> pr = alloc_n_copy(str_vec.begin(), str_vec.end());
	elements = pr.first;
	first_free = end_free = pr.second;
}


/****************** Member function **********/

// return the size of the StrVec
size_t StrVec::size() const
{
	return (first_free - elements);
}


// return the capacity of the StrVec
size_t StrVec::capacity() const
{
	return (end_free - elements);
}

// return the elements
std::string * StrVec::begin() const
{
	return elements;
}

//return the first_free 
std::string * StrVec::end() const
{
	return  first_free;
}


//reallocate the memory
void StrVec::reallocate()
{
	// expand the memory with 1.5 speed of the old capacity
	size_t new_capacity = size() ? size() * 1.5 : 1;
	// allocate the memory
	std::string * new_memo = allo.allocate(new_capacity);
	//construct the element using the move constructor
	std::string * dest = new_memo;
	for (std::string * iter = elements; iter != first_free; iter++)
	{
		allo.construct(dest++, std::move(*iter));
	}
	// free the old memory
	free();
	// get the new memory
	elements = new_memo;
	first_free = dest;
	end_free = elements + new_capacity;

}



//allocate a memory and copy the origin data between the lptr and rptr
std::pair<std::string *,std::string *> StrVec::alloc_n_copy(const std::string * lptr,const std::string * rptr) 
{
	size_t count = rptr - lptr;
	std::string * data = allo.allocate(count);
	std::string * data_free = uninitialized_copy(lptr, rptr, data);
	return(make_pair(data, data_free));
}


// check the capacity
void StrVec::chk_n_alloc()
{
	if (first_free == end_free)
	{
		reallocate();
	}
}



//push string to the back of the StrVec
void StrVec::push_back(const std::string & str)
{
	chk_n_alloc();
	allo.construct(first_free++,str);
}

//free the old memory of the StrVec
void StrVec::free()
{
	// if the no memory there is no need to deallocate the memory
	if (elements)
	{
		for (; first_free != elements;)
		{
			// destroy the element
			allo.destroy(--first_free);
		}
		// deallocate the memory allocated
		allo.deallocate(elements, end_free - elements);
	}
}


void StrVec::resize(size_t sz, const string str = "")
{
	size_t old_size = size();
	if (sz > old_size)
	{
		for (size_t i = 0; i < sz - old_size; i++)
		{
			allo.construct(first_free++, str);
		}
	}
	else
	{
		for (size_t i = 0; i < old_size - sz; i++)
		{
			allo.destroy(--first_free);
		}
	}
}

/****************** Operator *****************/
StrVec & StrVec::operator =(const StrVec & str_vec)
{
	pair<string *, string *> pr = alloc_n_copy(str_vec.begin(), str_vec.end());
	free();
	elements = pr.first;
	first_free = end_free = pr.second;
	return *this;
}


StrVec & StrVec::operator =(std::initializer_list<std::string> init_list)
{
	pair<string *,string *> data = alloc_n_copy(init_list.begin(), init_list.end());
	free();
	elements = data.first;
	first_free = data.second;
	end_free = first_free;
	return *this;
}

std::string & StrVec::operator[] (size_t n) &
{
	return elements[n];
}

const std::string & StrVec::operator[] (size_t n) const &&
{
	return elements[n];
}
/****************** Deconstrutor *************/
StrVec::~StrVec()
{
	free();
}
