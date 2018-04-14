#include<iostream>

using namespace std;

//1. To initialise non static Const data member from outside
class Base{
	const int _x;
	public:
	Base():_x{0} {} 
	Base(int x):_x{x} {}
	void print() { cout<< _x <<endl;}
};	

int main()
{
	Base b(10);
	b.print();
	Base b1(12);
	b1.print();

	return 0;
}

