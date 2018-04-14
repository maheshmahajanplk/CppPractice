#include<iostream>

class boVector{
	int size;
	double* arr_;
	
	public:
		boVector(const boVector& rhs){ //copy constructor...
			size = rhs.size;
			arr_ = new double[size];
			for(int i=0;i<size;i++){arr_[i]= rhs.arr_[i];}//deep copy
		}
		boVector(boVector&& rhs){ //Move constructor...
			size = rhs.size;
			arr_ = rhs.arr_;
			rhs.arr_ = nullptr;
			for(int i=0;i<size;i++){arr_[i]= rhs.arr_[i];}//deep copy
		}
		~boVector() {delete arr_;}
};

//static functions...
void createBoVector(){
		boVector b;
		
}
void foo(boVector v){
	
}

int main()
{
	boVector reusable = createBoVector();
	foo(reusable); //calls expensive deep copy inside copy constructor
	foo(createBoVector()); 

	return 0;
}
