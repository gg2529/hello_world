#include <iostream>
#include <fstream>
#include "fstream_fun.h"

void testfn( std::ios::event ev, std::ios_base& stream, int index )
{
	switch( ev )
	{
		case std::ios_base::copyfmt_event:
			std::cout << "copyfmt_event\n" ; break;
		case std::ios_base::imbue_event:
			std::cout << "imbue_event\n"; break;
		case std::ios_base::erase_event:
			std::cout << "erase_event\n"; break;
	}
}
