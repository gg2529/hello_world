#include<iostream>
#include "a_class.h"

using namespace std;
int main()
{
std::cout << "Hello world" << std::endl;

A a;
a.addValuetoVector(1);
a.addValuetoVector(2);
a.addValuetoVector(3);
a.addValuetoVector(4);

a.printVector();

return 0;
}
