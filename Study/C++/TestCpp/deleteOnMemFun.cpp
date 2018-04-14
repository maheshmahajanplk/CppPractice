#include<iostream>
using namespace std;

class sample{
	int i;
	public:
		~sample(){cout<<"\nDestructor gets called\n";}
		void fun(){
			//if(this)
			delete this; 
			cout<<"\nFun has cleared heap memory\n"<<endl;
		}
};

int main()
{
	sample *s = new sample;
	s->fun();
	
	sample s1;
//	s1.fun();

	return 0;
}

