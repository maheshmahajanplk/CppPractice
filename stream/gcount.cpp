// cin.gcount example
#include <iostream>     // std::cin, std::cout
#include<sstream>

int main () {
  char str[20];
  std::stringstream ss;

  std::cout << "Please, enter a word: ";
  std::cin.getline(str,20);
  ss<<str;

  ss<<"|"<<&str;
  std::cout << std::cin.gcount() << " characters read: " << str << '\n';
  
  std::cout << ss.gcount() << " characters read: " << ss.str() << '\n';
  return 0;
}
