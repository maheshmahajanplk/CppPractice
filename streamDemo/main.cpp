#include <iostream>
#include<sstream>
#include<string>
#include<map>

using namespace std;

string removeSpaces(string str);
int getMathOperations();
void printFrequency(string st);

int main()
{
//    cout << "Hello World!" << endl;
    string s = "This is a test";
    //cout << removeSpaces(s) << endl;

   //cout<<"result is:"<< getMathOperations();
   printFrequency("Geeks for Geeks idea");
    return 0;
}

/*sample stringstream use 1: Function to remove spaces */
string removeSpaces(string str)
{
    stringstream ss;
    string temp;

    /* Storing the whole string into string stream */
    ss << str;

    /* Making the string empty */
    str = "";

    /* Running loop till end of stream */
    while (!ss.eof())
    {
        /* extracting word by word from stream */
        ss >> temp;

        /* concatenating in the string to be
          returned*/
        str = str + temp;
    }
    return str;
}

//sample use 2
int getMathOperations(){

    string s;                 // Where to store each line.
    int    a, b;              // Somewhere to put the ints.
    char   op;                // Where to save the char (an operator)
    istringstream instream;   // Declare an input string stream
    int result=0;

    while (getline(cin, s)) { // Reads line into s
        instream.clear();     // Reset from possible previous errors.
        instream.str(s);      // Use s as source of input.
        if (instream >> a >> op >> b) {
            instream >> ws;        // Skip white space, if any.
            if (instream.eof()) {  // true if we're at end of string.
                cout << "OK." << endl;

                switch (op) {
                case '+': result = a + b; break;
                case '-': result = a - b; break;
                case '*': result = a * b; break;
                case '/': result = a / b; break;
                default : cout << "Bad operator '" << op << endl;
                    continue;  // next loop iteration
                }
            } else {
                cout << "BAD. Too much on the line." << endl;
            }
        } else {
            cout << "BAD: Didn't find the three items." << endl;
        }
    }
    return result;
}

//sample use 3
void printFrequency(string st)
{
    // each word it mapped to it's frequency
    map<string, int> FW;
    stringstream ss(st); // Used for breaking words
    string Word; // To store individual words

    while (ss >> Word)
        FW[Word]++;

    map<string, int>::iterator m;
    for (m = FW.begin(); m != FW.end(); m++)
        cout << m->first << " -> "
             << m->second << "\n";
}
