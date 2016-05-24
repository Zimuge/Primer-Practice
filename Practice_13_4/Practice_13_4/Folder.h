#pragma once
class Message;
class Folder
{
	friend class Message;
public:
	/*********************** constructor **************/
	Folder();
	Folder(const Folder & fd);

	/*********************** member function **************/
	void addMsg(Message &);
	void remMsg( Message &);
	
	
	/*********************** operator **************/
	Folder &  operator = ( const Folder &);

	/*********************** deconstructor **************/
	~Folder();

private:
	std::set<Message *> messages;
};

