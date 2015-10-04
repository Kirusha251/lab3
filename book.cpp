#include "book.h"
#include<iostream>

Book::Book(void)
{
	std::cout << "Constructor is called Book" << std::endl;
}

Book::~Book(void)
{
	std::cout << "Destructor is called Book" << std::endl;
}



void Book::setGenre(char *gen)
{
	this->genre = gen;
}

void Book::setNumbparts(int cop)
{
	this->numberOfparts = cop;
}

int Book::getNumpCop()
{
	return this->numberOfparts;
}

char* Book::getGenre()
{
	return this->genre;
}

void Book::setAuth(char *name, char *surname)
{
	this->AuthName.setName(name);
	this->AuthName.setSurname(surname);
}

char* Book::getAuthName()
{
	return this->AuthName.getName();
}

char* Book::getAuthSurname()
{
	return this->AuthName.getSurname();
}

void Book::showcontent()
{
	std::cout << "------------Book content------------" << std::endl;
	std::cout << std::endl;
	std::cout << getAuthName() << std::endl;
	std::cout << getAuthSurname() << std::endl;
	std::cout << getGenre() << std::endl;
	std::cout << getNameObj()<< std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
}

