#include "ios_fun.h"
#include <iostream>
#include <ios>

void changeWidth() 
{
	std::cout << 100 << "\n";
	std::cout.width(10);
	std::cout << 100 << "\n";
	std::cout.fill('x');
	std::cout.width(10);
	std::cout << 100 << "\n";
}

void throwException()
{
	throw std::ios_base::failure("Exception thrown");
}
