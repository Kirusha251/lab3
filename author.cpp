#include "author.h"
#include <iostream>


Author::Author(void)
{
	std::cout << "Constructor is called Author" << std::endl;
}

Author::~Author(void)
{
	std::cout << "Destructor is called Author" << std::endl;
}

void Author::setFirsBook(char *first)
{
	this->firstbook = first;
}

void Author::setNumbersOfBooks(int num)
{
	this->numbersOfBooks = num;
}

char* Author::getFirstBook()
{
	return this->firstbook; 
}

int  Author::getNumbersOfbooks()
{
	return this->numbersOfBooks;
}

void Author::add()
{
	if (!head)
	{
		head = this;
		this->next = NULL;
	}
	else
	{
		Person *q = head;
		if (q->next == NULL)
		{
			q->next = this;
			this->next = NULL;
		}
		else
		{
			while (q->next != NULL)
			{
				q = q->next;
			};
			q->next = this;
			this->next = NULL;
		}
	}
}

void Author::setName(char *name)
{
	this->Name = name;
}

void Author::setSurname(char *surname)
{
	this->Surname = surname;
}

void Author::setDateofBirthday(char *birthday)
{
	this->dateofBirthday = birthday;
}

char* Author::getName()
{
	return this->Name;
}

char* Author::getDateofBirthday()
{
	return this->dateofBirthday;
}

char* Author::getSurname()
{
	return this->Surname;
}

void Author::show()
{
	Person *p = head;
	while (p)
	{
		p->showcontent();
		p = p->next;
	}
}

void Author::showcontent()
{
	std::cout << "im Working now bitch" << std::endl;
}