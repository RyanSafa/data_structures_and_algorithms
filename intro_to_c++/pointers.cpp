#include<iostream>
#include <iterator>
int main() {
  // int a = 20;
  // int *p; // iniating pointer
  // p = &a; // sotring memeory address of a to pointer

  // std::cout << a << std::endl;
  // std::cout << p << std::endl;
  // std::cout << *p << std::endl; 

  int A[] = {1,2,3,4,5}; 
  int *p = A; // A itself is a pointer so we don't need the ampersand
  int *q = &A[0];


  int *array_in_heap = new int[25]; // creates array in heap 

  array_in_heap[0] = 1; array_in_heap[1] = 1; array_in_heap[2] = 2;

  for (int i = 0; i < 25; i++) {
    std::cout << array_in_heap[i] << std::endl;
  }
  delete [] array_in_heap;
  return 0;
}