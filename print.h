#pragma once
#include"publishing_office.h"

class Print:
	public Publishing_Office
{
	char *nameObj;
	int numbersOfCopies;
	int numbersOfPages;
public:
	Print(void);
	~Print(void);
	void setNameObj(char *name);
	void setNumbersOfCopies(int num);
	void setNumbersOfPages(int num);
	char* getNameObj();
	int getNumbersOfCopies();
	int getNumbersOfPages();
	virtual void setNameOfOffice(char *name);
	virtual void setOfficeAddress(char *Address);
	virtual char* getNameOfOffice();
	virtual char* getOfficeAddress();
	virtual void add();
	virtual void show();
	virtual void showcontent(){};
};