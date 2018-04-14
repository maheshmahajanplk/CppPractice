#include<iostream>
using namespace std;

class A{
	int a;
	public:
//	int a;
	A(int i=23){ //default argument
		a=i;
	}
	virtual void show(){
		cout<<"a="<<a<<endl;
	}
	
};

class B : public A
{
	int b;
	public:
	B(const int& i){ //copy constructor syntax allowed to use for parametirised constructor
		b=i;
	}
	void show(){
		cout<<"b="<<b<<endl;
		::show();
	}
	
};
int main()
{
	//A objA(89);
	//A.a=20;
	//objA.show();
	B objB(10);
	objB.show();
	A *pA=&objB;
	pA->show();
}
