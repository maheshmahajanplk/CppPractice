#include<iostream>

using namespace std;

//3. To initialise contained object as data member from outside
class One{
	int _x;
	public:
//	One(): _x(0) {}
	One(int x) : _x{x} {} 
};	

class Two{
	One a;
	public:
	Two(One x):a{x} {} 
};
int main()
{
	One one(10);
	Two two(one);
	
	return 0;
}

