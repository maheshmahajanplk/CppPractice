#include<iostream>
//5. if we initialise Base class member in derived class constructor.  
using namespace std;
class Base{
	int _x;
public:
	Base() {cout<< "Base default" <<endl; }
	Base(int x) {_x=x; cout<<"Base parameter constructor"<<endl;}
	Base(const Base & obj){this->_x = obj._x;cout<<"Base copy constructor"<<endl;}
	Base& operator = (const Base& obj){cout<<"base assignment operator"<<endl;}
};

class MyClass 
{
	Base _b;
	public:
		MyClass(){cout<<"myclass default"<<endl;}
		//MyClass(Base b){_b=b;cout<<"myclass parameter constructor"<<endl;}
		//Alternative option
		MyClass(Base b):_b{b} {cout<<"myclass parameter constructor"<<endl;}
		//Child(int x,int y): Base{x},_y{y} {}
	
		//Child(int x,int y){_x = x; _y=y;}

};

int main()
{
	Base b(10);
	MyClass mc(b);

	return 0;
}
