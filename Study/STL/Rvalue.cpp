#include<iostream>
using namespace std;

void printInt(int& i) {cout<<"lvalue reference\n";}
void printInt(int&& i) {cout<<"rvalue reference\n";}
void printInt(int i) { cout<<"normal fun\n"; }
int main()
{
	int a=5; //a is a lvalue
	int& b=a; // b is a lvalue reference

	//int&& c = 7;
	printInt(7);
        printInt(b);
	
	return 0;
}
