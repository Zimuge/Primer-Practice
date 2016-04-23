#include "stdafx.h"
#include "Message.h"

			/********************** constructor *********************/

//default constructor
 Message::Message(const std::string & str = " ") : contents(str)
{

}

 // copy constructor
Message::Message(const Message & msg):contents(msg.contents),folders(msg.folders)
{
	this->add_to_folders(msg);
}



         /***********************member function*******************/

// function use to save message to a folder
void Message::save(Folder & fd)
{
	this->folders.insert(&fd);
	fd.addMsg(*this);
}

// function use to remove message from a folder
void Message::remove(Folder & fd)
{
	this->folders.erase(&fd);
	fd.remMsg(*this);
}

void Message::addFolder(Folder & fl)
{
	folders.insert(&fl);
	fl.addMsg(*this);
}

void Message::remFolder(Folder & fl)
{
	folders.erase(&fl);
	fl.remMsg(*this);
}

//function use to add message to folders
void Message::add_to_folders(const Message & msg)
{
	std::set<Folder *>::iterator iter = msg.folders.cbegin();
	while (iter != msg.folders.cend())
	{
		(*iter)->addMsg(*this);
		iter++;
	}
}

// remove a message from the folders
void Message::remove_from_folders()
{
	std::set<Folder *>::iterator iter = this->folders.begin();
	while (iter != this->folders.end())
	{
		(*iter)->remMsg(*this);
	}

}


         /*********************** operator *************************/

// operator = 
Message & Message::operator =(const Message & msg)
{
	//remove the message from the folders
	this->remove_from_folders();

	// copy the contents
	contents = msg.contents;
	
	// copy the folders 
	folders = msg.folders;

	//
	this->add_to_folders(*this);

	return *this;
}


		/*********************** deconstructor *******************/
Message::~Message()
{
	remove_from_folders();
}
