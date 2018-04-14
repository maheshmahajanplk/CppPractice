/*C++ 03
* 1. Default constructor( Generated only if no constructor is declared by user)
* 2. Copy constructor( Generated only if no 5,6 declared by user )
* 3. Copy assignment operator ( Generated only if 5,6 not declared by user )
* 4. Destructor
*
* C++ 11
* 5. move constructor (generated only if 2 ,3 ,4,6 not declared by user )
* 6. move assignment operator ( generated only 2,3,4,5 not declared by user )
*/

//try compiling this code with -std=c++03 or -std=c++11 switch of g++, then see the results....
#include<iostream>

class Dog{}; //check what all compiler generated functions available for C++ 03 and C++ 11

int main()
{
	Dog d; //default constructor
	Dog g = d; //copy constructor
	Dog m; 
	m = d; //overloaded assignment operator
 
	return 0;
}
