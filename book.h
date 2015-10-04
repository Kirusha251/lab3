#pragma once
#include "print.h"
#include"author.h"
#include "Person.h"

class Book :
	public Print
{
	int numberOfparts;
	char *genre;
	Author AuthName;
public:
	Book(void);
	~Book(void);
	void setNumbparts(int cop);
	void setGenre(char *genre);
	int getNumpCop();
	char* getGenre();
	void setAuth(char *name,char *surname);
	char* getAuthName();
	char* getAuthSurname();
};