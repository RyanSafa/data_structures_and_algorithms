#include <iostream>
class Rectangle {
private:
  int length;
  int breadth;

public:
  Rectangle() {
    length = 0;
    breadth = 0;
  }
  Rectangle(int l, int b) {
    length = l;
    breadth = b;
  }
  int area() { return length * breadth; }
  void setLength(int l) { length = l; }
  void setBreadth(int l) { length = l; }
  int getLength() { return length; }
  int getBreadth() { return breadth; }

  ~Rectangle() { std::cout << "Destructor" << std::endl; }
};

int main() {
  Rectangle r(10, 5);
  std::cout << "Area " << r.area() << std::endl;

  return 0;
}
