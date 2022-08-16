#include<iostream>

int main() {
  int a = 10;
  int &r = a; // reference of a. Meaning that r represents the same space in memeory as a

  std::cout << a; std::cout << r << std::endl;
  r = 100;
  std::cout << a; std::cout << r << std::endl;
  return 0;
}