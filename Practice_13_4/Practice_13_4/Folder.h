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
	void addMsg(const Message &);
	void remMsg(const Message &);
	\

	/*********************** operator **************/
	Folder &  operator = (const Folder &);

	/*********************** deconstructor **************/
	~Folder();

private:
	std::set<Message *> messages;
};

