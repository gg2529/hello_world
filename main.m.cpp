#include<iostream>
#include "a_class.h"
#include <tuple>
#include <string>

static void tupleCode()
{
	std::tuple<int, int, string> a_tuple(10, 11, "First Tuple");
	std::cout << std::get<1>(a_tuple) << std::endl;
}
using namespace std;
int main()
{
std::cout << "Hello world" << std::endl;
/*
A a;
a.addValuetoVector(1);
a.addValuetoVector(2);
a.addValuetoVector(3);
a.addValuetoVector(4);

a.printVector();
*/
tupleCode();
return 0;
}
