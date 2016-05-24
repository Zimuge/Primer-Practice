#pragma once
#include "stdafx.h"
class Folder;

class Message
{
	friend class Folder;
public:
	// constructor
    Message(const std::string & str);

	Message(const Message & msg);
	
	// member function
	void save(Folder & fd);
	void remove(Folder & fd);
	void addFolder(Folder &);
	void remFolder(Folder &);

	// operator
	Message & operator =(const Message & msg);

	//deconstructor
	~Message();

private:
	std::string contents;
	std::set<Folder *> folders;
	void add_to_folders(const Message & msg);
	void remove_from_folders();
	
};

