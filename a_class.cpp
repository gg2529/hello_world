#include "a_class.h"
#include <iostream>

void A::addValuetoVector( int a )
{
	v.push_back(a);
}

void A::printVector() const
{
	for( it i = v.begin() ; i!= v.end() ; i++ )
	{
		std::cout << *i << std::endl;
	}
}
