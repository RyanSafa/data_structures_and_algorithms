#include <iostream>

int main() {
  int *p = new int[5]{1,3,5,7,9}, *q = new int [10];

  for (int i = 0; i < 5; i++) {
    std::cout << p[i] << std::endl;
  }

  for (int i = 0; i < 5; i++) {
    q[i] = p[i];
  }
  delete []p;
  p = q;
  q = NULL;

  for (int i = 0; i < 10; i++) {
    std::cout << p[i] << std::endl;
  }
}