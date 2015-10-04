#include"textbook.h"
#include<iostream>



Textbook:: Textbook(void)
{
	std::cout << "Constructor is called TextBook" << std::endl;
}

Textbook:: ~Textbook(void)
{
	std::cout << "Destructor is called TextBook" << std::endl;
}

void Textbook::setForm(int form)
{
	this->form = form;
}

void Textbook::setSubject(char *subject)
{
	this->subject = subject;
}

int Textbook::getForm()
{
	return this->form;
}

char* Textbook::getSubject()
{
	return this->subject;
}