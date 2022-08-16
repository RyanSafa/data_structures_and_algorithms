#include <iostream>

int main() {
  int A[5]={2,4,6,8,10};
  int *p = new int[5] {1,3,5,7,9};

  for (int i = 0; i < 5; i++) {
    std::cout << A[i] << std::endl;
  }

  for (int i = 0; i < 5; i++) {
    std::cout << p[i] << std::endl;
  }
  return 0;
}