#include<iostream>
using namespace std;

int main()
{
    int n, reversedInteger = 0, remainder, originalInteger;

    cout<<"Enter an integer: ";
    cin>>n;

    originalInteger = n;

    // reversed integer is stored in variable 
    while( n!=0 )
    {
        remainder = n%10;
        reversedInteger = reversedInteger*10 + remainder;
        n /= 10;
    }

    // palindrome if orignalInteger and reversedInteger are equal
    if (originalInteger == reversedInteger)
        cout<<originalInteger<<"is a palindrome."<<endl;
    else
        cout<<originalInteger<<"is not a palindrome."<<endl;
    
    return 0;
}
