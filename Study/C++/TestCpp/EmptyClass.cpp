#include<iostream>
class Base{
};

int main()
{
	Base b1,b2;

	if(&b1 == &b2){
		std::cout<<"found equal"<<std::endl;
	}else{
		std::cout<<"Unequal"<<std::endl;
	}

	return 0;
}
