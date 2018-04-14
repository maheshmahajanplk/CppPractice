#include <iostream> // standard I/O
#include <algorithm> // we will use the rotate algorithm
#include <vector> // we need a vector to rotate!

using std::cout; // output the values to see what's happening
using std::endl; // make our output easier to read
using std::cin; // pause for input
using std::vector; // and of course, we need a vector

int main () // beginning of main
{
    vector <int> myVec; // create a vector of ints called myVec
    vector <int>::iterator it; // create a vector iterator called it
    // now let's fill our vector with some values
    for (int i = 1; i < 10; i++) // 9 loops
        myVec.push_back (i); // add the value of i to our vector
    cout << "Before rotation: "; // before rotation (simple enough!)
    for (it = myVec.begin(); it < myVec.end(); ++it) // use it to iterate through myVec
        cout << *it << " "; // output it

    // now it's time for rotate
    // we're going to start at the beginning                       - myVec.begin()
    // we're going to shift the values across by 5                 - myVec.begin()+5
    // and we're going to stop when we reach the end of the vector - myVec.end()

    rotate(myVec.begin(), myVec.end()-5,myVec.end());

    cout << endl; // add an empty line for our next output
    cout << "After rotation: "; // after rotation
    for (it = myVec.begin(); it < myVec.end(); ++it) // use it to iterate through myVec
            cout << *it << " "; // output it
    cin.get (); // pause for input

    return EXIT_SUCCESS; // everything went OK
}

