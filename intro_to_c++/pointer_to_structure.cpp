#include<iostream>

struct Rectangle {
  int length;
  int width;
};

int main() {
  Rectangle r = {1,2};

  std::cout << r.length << std::endl;

  Rectangle *p = &r;
  std::cout << p << std::endl;
  std::cout << (*p).length << std::endl;
  std::cout << p->length << std::endl; // same thing as line above

  p = new Rectangle;
  p->length = 15;

  std::cout << p->length << std::endl; 


  return 0;
}