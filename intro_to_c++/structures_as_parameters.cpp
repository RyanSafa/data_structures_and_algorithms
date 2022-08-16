#include <iostream>

struct Rectangle {
  int length;
  int breadth;
};

void fun (Rectangle *p) { // new structure is created by default when passing a struct
  p->length = 20;
  std::cout << "Lenght: " << p->length << ", Width: " << p->breadth << std::endl;
}
Rectangle *create_struct_heap() {
  Rectangle *p = new Rectangle;
  p->length = 100;
  p->breadth = 20;
  return p;
}
int main() {
  Rectangle r  = {1,2};
  fun(&r);
  Rectangle *ptr = create_struct_heap();
  std::cout << "Lenght: " << r.length << ", Width: " << r.breadth << std::endl;
  return 0;
}