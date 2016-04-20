#pragma once
#include "stdafx.h"
class Folder;

class Message
{
	friend class Folder;
public:
	// constructor
    Message(const std::string & str = "");

	Message(const Message & msg);
	
	// member function
	void save(Folder & fd);
	void remove(Folder & fd);

	// operator
	Message & operator =(const Message & msg);

	//deconstructor
	~Message();

private:
	std::string contents;
	std::set<Folder *> folders;
	
};

