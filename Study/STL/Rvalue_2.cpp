#include <iostream>

int getValue ()
{
    int ii = 10;
    return ii;
}

int main()
{
    std::cout << getValue();

    const int& val = getValue(); // OK
    int& val = getValue();       // NOT OK
    return 0;
}
