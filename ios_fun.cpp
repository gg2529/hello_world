#include "ios_fun.h"
#include <iostream>

void changeWidth() 
{
	std::cout << 100 << "\n";
	std::cout.width(10);
	std::cout << 100 << "\n";
	std::cout.fill('x');
	std::cout.width(10);
	std::cout << 100 << "\n";
}
