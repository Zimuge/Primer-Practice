#include "stdafx.h"
#include "Message.h"

/********************** constructor *********************/

 Message::Message(const std::string & str) : contents(str)
{

}

Message::Message(const Message & msg)
{

}
/***********************member function*******************/

// function use to save message to a folder
void Message::save(Folder & fd)
{
	this->folders.insert(&fd);
}

// function use to remove message from a folder
void Message::remove(Folder & fd)
{

}

/*********************** operator *************************/
Message & Message::operator =(const Message & msg)
{
	return *this;
}


/*********************** deconstructor *******************/
Message::~Message()
{
}
