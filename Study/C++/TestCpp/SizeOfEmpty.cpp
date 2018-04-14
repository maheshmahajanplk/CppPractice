#include<iostream>
struct Struct1 { };

class Class1 { };

int main()
{
	std::cout<<sizeof(Struct1)<<std::endl;
	std::cout<<sizeof(Class1)<<std::endl;

	return 0;
}
