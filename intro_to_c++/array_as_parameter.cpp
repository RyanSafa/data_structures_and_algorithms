#include <iostream>
#include <iterator>

void fun (int A[], int n) { // A is a pointer to the first element in an array, not an actuall array
  for (int i = 0; i < n; i++) {
    std::cout << A[i] << std::endl;
  }
}

int * return_array (int size) {
  int *p = new int[size]; // initializes an array in heap
  for (int i = 0; i < size; i++) {
    p[i] = i + 1;
  }
  return p;
}

int main() {
  int A[] = {1,2,3,4,5};
  int n = 5;
  fun(A, 5);
  int *ptr_to_array_in_heap = return_array(n);
  for (int i = 0; i < n; i++) {
    std::cout << ptr_to_array_in_heap[i] << std::endl;
  }
  for (int x: A) {
    std::cout << x << std::endl;
  }
}