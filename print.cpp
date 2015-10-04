#include"print.h"
#include<iostream>

Print::Print(void)
{
	std::cout << "Constructor is called Printed edition " << std::endl;
}

Print::~Print(void)
{
	std::cout << "Denstructor is called Printed edition" << std::endl;
}


void Print::setNameObj(char *name)
{
	this->nameObj = name;
}



void Print::setNumbersOfCopies(int num)
{
	this->numbersOfCopies = num;
}

void Print::setNumbersOfPages(int num)
{
	this->numbersOfPages = num;
}


char* Print::getNameObj()
{
	return this->nameObj;
}

int	Print::getNumbersOfCopies()
{
	return this->numbersOfCopies;
}

int Print::getNumbersOfPages()
{
	return this->numbersOfPages;
}

void Print::setNameOfOffice(char *name)
{
	this->NameOfOffice = name;
}

void Print::setOfficeAddress(char *address)
{
	this->OfficeAddress = address;
}
char* Print::getNameOfOffice()
{
	return this->NameOfOffice;
}

char* Print::getOfficeAddress()
{
	return this->OfficeAddress;
}

void Print::add()
{
	if (!head)
	{
		head = this;
		this->next = NULL;
	}
	else
	{
		Publishing_Office *q = head;
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

void Print::show()
{
	Publishing_Office *p = head;
	while (p)
	{	
		
		p = p->next;
	}
}