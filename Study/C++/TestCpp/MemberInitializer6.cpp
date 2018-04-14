#include<iostream>
//5. if we initialise Base class member in derived class constructor.  

class Base{
	int _x;
public:
	Base(int x): _x{x}{}
};

class Child : public Base 
{
	int _y;
	
	public:
		Child(int x,int y): Base{x},_y{y} {}
	
		//Child(int x,int y){_x = x; _y=y;}

};

int main()
{
	Child c(1,2);
	return 0;
}
