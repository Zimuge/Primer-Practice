#pragma once
#ifndef SP_H

#define SP_H
template <typename T>
class SP
{
public:
	SP();
	explicit SP(T * p);
	SP(const SP & sp);
	SP & operator= (const SP & sp);
	T& operator*();
	T& operator*() const;
	~SP();

private:
	T * p;
	std::size_t * count;
};

template<typename T>
SP<T>::SP():p(nullptr),count(nullptr)
{
	
}

template<typename T>
SP<T>::SP(T * pt):p(pt),count(new std::size_t (1))
{

}

template <typename T>
SP<T>::SP(const SP<T> & sp):p(sp.p),count(sp.count)
{
	if (count)
	{
		(++*count);
	}		
}

template <typename T>
SP<T>& SP<T>::operator=(const SP& rhs)
{
	if(rhs.count)
	{
		++(*rhs.count);
	}
	if(count && --*count == 0)
	{
		delete p;
		delete count;
	}
	p = rhs.p;
	count = rhs.count;
	return *this;
}

template <typename T>
T& SP<T>::operator* ()
{
		return *p;
}

template <typename T>
T& SP<T>::operator*() const
{
		return *p;
}


template<typename T>
SP<T>::~SP()
{
	if (count && --*count == 0)
	{
		delete p;
		delete count;
	}
}

#endif