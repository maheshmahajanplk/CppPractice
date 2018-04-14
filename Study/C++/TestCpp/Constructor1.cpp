#include<iostream>
using namespace std;

class A {
	int a;
	public:
		A(){cout<<"..Dafault...\n";}
		A(int a){cout<<"Parametirised constructor....\n";}
		~A(){ cout<< " Destructor gets called \n";}
		A(const A &obj){ this->a = obj.a;cout<<"...Copy constructor....\n";
		}
		A& operator=(const A& obj){
			this->a = obj.a;
			return *this;
		}
};

void fun(A obj)
{
	
}

int main()
{
	A *obj1 = new A();
	delete obj1;
	
	return 0;
}
