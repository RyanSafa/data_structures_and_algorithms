#include <iostream>
#include <iterator> 

struct Rectangle {
  int length;
  int width;
  char x;
};

int main() {
  struct Rectangle r1 = {1,2};

  std::cout << sizeof(r1) << std::endl;
  std::cout << r1.length; std::cout <<  ", "; std::cout << r1.width << std::endl; 
  return 0;
}
