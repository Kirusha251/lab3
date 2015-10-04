#include"magazine.h"
#include<iostream>

Magazine::Magazine(void)
{
	std::cout << "Constructor is called Printed edition" << std::endl;
}

Magazine::~Magazine(void)
{
	std::cout << "Destructor is called Printed edition" << std::endl;
}


void Magazine::setTheme(char *theme)
{
	this->theme = theme;
}


char* Magazine::getTheme()
{
	return this->theme;
}
