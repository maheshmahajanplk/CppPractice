#include<iostream>
using namespace std;

class A{
	int priA;
	public:
	int pubA;
	A(){cout<<"Constructor A gets called here.";}
	~A(){
		cout<<"Destructor A gets called here";
	}
};
class B {
	int priB;
	public:
	int pubB;
	B(){
		cout<<"Constructor B gets called here";
	}
	~B(){
		cout<<"Destructor B gets called here";
	}
	void show(){
		cout<<"priB"<<priB<<"pubB="<<pubB<<endl;
	}
};
class C : public A , B {
	

	public:
	C(){
		cout<<"Constructor C gets called here";
	}
	~C()
	{
		cout<<"Destructor C gets called here";
	}
	void show()
	{
		cout<<"priA"<<priA<<endl;
	}
};

int main()
{
	C obj;
	obj.show();
	return 0;
}
