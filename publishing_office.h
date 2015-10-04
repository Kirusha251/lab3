#pragma once 



class Publishing_Office
{
public:
	char *NameOfOffice;
	char *OfficeAddress;
protected:
	static Publishing_Office *head;
public:
	Publishing_Office *next;
	virtual ~Publishing_Office(void){};
	virtual void setNameOfOffice(char *name)=0;
	virtual void setOfficeAddress(char *Address)=0;
	virtual char* getNameOfOffice()=0;
	virtual char* getOfficeAddress()=0;
	virtual void add()=0;
	virtual void show() = 0;
	virtual void showcontent() = 0;
};