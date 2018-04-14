//To write your own abs() function
#include<iostream>
#include<stdio.h>
//print whether msb isone for negative numbers
//how 0x10 stored in binary and  print
//write logic how the 2's complement works

void print_binary(int n){

	int i;
	for (i = 1 << 31; i > 0; i = i / 2)
        	(n & i)? printf("1"): printf("0");
}

int xabs(){
		int v;           // we want to find the absolute value of v
		unsigned int r;  // the result goes here 
		int const mask = v >> sizeof(int) * CHAR_BIT - 1;
		r = (v + mask) ^ mask;
	return r;
}

int main()
{
	int x = 0x10;
	
	print_binary(0x10000000);

	std::cout<<"r="<<r<<std::endl;	

	return 0;
}
