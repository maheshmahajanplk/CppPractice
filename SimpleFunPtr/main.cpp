#include <iostream>

class class_name
{
    public:

        // Functions to 'point' to
        const void foo()
        {
            std::cout << "foo() has been called." << std::endl;
        };

        // Create the 'bar' type for member functions
        // with the signature 'const void ...()'
        typedef const void (class_name::*bar)();

        // Store a pointer to a member function
        static const bar ptr;

        // Example call usage
        const void call()
        {
            // calls this->foo()
            (this->*ptr)();
        }
};

// Initialise 'ptr' as pointing to class_name::foo();
const class_name::bar class_name::ptr = &class_name::foo;

int main()
{
    //source: https://nodehead.com/statically-mapping-member-function-pointers-in-c/
    class_name a;
    a.call();      // foo() has been called.

    return 0;
}
