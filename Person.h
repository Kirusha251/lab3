#pragma once


class Person
{
public:
	char *Name;
	char *Surname;
	char *dateofBirthday;
protected:
	static Person *head;
public :
	Person *next;
	virtual ~Person(void){};
	virtual void setName(char *name) = 0;
	virtual void setSurname(char *surname) = 0;
	virtual void setDateofBirthday(char *birth) = 0;
	virtual char* getName()=0;
	virtual char* getSurname()=0;
	virtual char* getDateofBirthday()=0;
	virtual void add() = 0;
};