#include <iostream>

int main() {
  // all 12 arrays in stack
  int A[3][4] {{1,2,3,4}, {2,4,6,8}, {1,3,5,7}};
  // subarrays in heap
  int *B[3] {new int[4], new int[4], new int[4]};
  // all 12 arrays in heap 
  int **C = new int*[3]{new int [4], new int [4], new int[4]};

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      std::cout << A[i][j] << std::endl;
    }
  }
  
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      std::cout << B[i][j] << std::endl;
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      std::cout << C[i][j] << std::endl;
    }
  }
  return 0;
}