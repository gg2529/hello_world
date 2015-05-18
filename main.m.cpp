#include<iostream>
#include "a_class.h"
#include "ios_fun.h"
#include "fstream_fun.h"
#include <fstream>

using namespace std;

void callback_example()
{
std::ofstream filestr;
filestr.register_callback( testfn, 0 );
filestr.imbue( std::cout.getloc());

}

void fileOpenExample()
{
	std::fstream fs;
	fs.open("text.txt", std::fstream::in | std::fstream::out);
	std::cout << "is eof = " <<  fs.eof();
	std::cout << "is bad = " <<  fs.bad();		
	fs.close();
}

int main()
{
std::cout << "Hello world" << std::endl;

/*A a;
a.addValuetoVector(1);
a.addValuetoVector(2);
a.addValuetoVector(3);
a.addValuetoVector(4);

a.printVector();
*/

//changeWidth();
//throwException();

fileOpenExample();

return 0;
}
