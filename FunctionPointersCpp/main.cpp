#include <iostream>
#include <map>

class class_name
{
    public:

        // Functions to 'point' to
        const void foo()
        {
            std::cout << "foo() has been called." << std::endl;
        };
        const void foobar()
        {
            std::cout << "foobar() has been called." << std::endl;
        };
        const void foobarbaz()
        {
            std::cout << "foobarbaz() has been called." << std::endl;
        };

        // Create the 'bar' type for member functions
        // with the signature 'const void ...()'
        typedef const void (class_name::*bar)();

        // Map single characters to pointers to a member functions
        static const std::map<char, bar> ptrs;

        // Example call usage
        const void call()
        {
            // calls this->foo()
            (this->*(ptrs.find('a')->second))();

            // calls this->foobar()
            (this->*(ptrs.find('b')->second))();

            // calls this->foobarbaz()
            (this->*(ptrs.find('c')->second))();
        }
};

// Initialise 'ptrs' with indexes a, b and c
const std::map<char, class_name::bar> class_name::ptrs =
{
    {'a', &class_name::foo},
    {'b', &class_name::foobar},
    {'c', &class_name::foobarbaz}
};

int main()
{
    class_name a;
    a.call();       // foo() has been called.
                    // foobar() has been called.
                    // foobarbaz() has been called.

    return 0;
}
