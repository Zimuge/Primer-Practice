#include "stdafx.h"
#include "Folder.h"
/*********************** constructor **************/
Folder::Folder()
{

}

Folder::Folder(const Folder & fd)
{
	messages = fd.messages;
}


/*********************** member function **************/
void Folder::addMsg( Message & msg)
{
	messages.insert(&msg);
}

void Folder::remMsg( Message & msg)
{
	messages.erase(&msg);
}


/*********************** operator **************/
Folder & Folder::operator= (const Folder & fd)
{
	messages = fd.messages;

	return *this;

}

/*********************** deconstructor **************/
Folder::~Folder()
{

}