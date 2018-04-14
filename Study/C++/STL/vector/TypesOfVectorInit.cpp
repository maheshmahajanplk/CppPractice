#include <iostream>
#include <vector>
#include <iterator>
#include <list>
#include <string>

void example1() {
// Initialize vector with 5 integers
// Default value of all 5 ints will be 0.
	std::vector<int> vecOfInts(5);

	for (int x : vecOfInts)
		std::cout << x << std::endl;

}

void example2() {
// Initialize vector to 5 string objects with value "Hi"
	std::vector<std::string> vecOfStr(5, "Hi");

	for (std::string str : vecOfStr)
		std::cout << str << std::endl;
}

void example3() {
// Create an array of string objects
	std::string arr[] = { "first", "sec", "third", "fourth" };

// Initialize vector with a string array
	std::vector<std::string> vecOfStr(arr,
			arr + sizeof(arr) / sizeof(std::string));

	for (std::string str : vecOfStr)
		std::cout << str << std::endl;

}

void example4() {
// Create an std::list of 5 string objects
	std::list<std::string> listOfStr;
	listOfStr.push_back("first");
	listOfStr.push_back("sec");
	listOfStr.push_back("third");
	listOfStr.push_back("fouth");

// Initialize a vector with std::list
	std::vector<std::string> vecOfStr(listOfStr.begin(), listOfStr.end());

	for (std::string str : vecOfStr)
		std::cout << str << std::endl;

// Initialize a vector with other string object
	std::vector<std::string> vecOfStr3(vecOfStr);

	for (std::string str : vecOfStr3)
		std::cout << str << std::endl;

}

int main() {

	example1();
	example2();
	example3();
	example4();
	return 0;
}
