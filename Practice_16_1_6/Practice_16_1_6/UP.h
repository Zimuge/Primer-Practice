#pragma once
#ifndef UP_H

#define UP_H
template <typename T>
class UP
{
public:
	UP() : p(nullptr){}
	UP(T *ptr) : p(ptr) {}
	UP(const UP &)  = delete;// the copy constructor is delete
	UP & operator= (const UP &) = delete;// the operator= is delete
	T* release();// release the pointer
	void reset(T* new_p);// reset the pointer
	T& operator*() { return *p; } //dereference 
	T& operator*() const { return *p; }
	~UP()
	{
		if(p)
		{
			delete p;
		}
	}
private:
	T * p;
	

};

template<typename T>
T* UP<T>::release()
{
	T *temp = p;
	p = nullptr;
	return temp;
}


template <typename T>
void UP<T>::reset(T * new_p)
{
	if(p)
	{
		delete p;
	}
	p = new_p;

}
#endif