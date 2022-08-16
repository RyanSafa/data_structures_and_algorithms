#include <iostream>
#include <iterator>

int binary_search(int (&arr)[10], int key) {
  int length = std::size(arr);
  int low = 0, high = length - 1, middle = (high + low) / 2;
  while (low <= high) {
    middle = (low + high) / 2;
    if (arr[middle] > key) {
      high = middle - 1;
    } else if (arr[middle] < key) {
      low = middle + 1;
    } else {
      return middle;
    }
  }
  return -1;
}

int rec_binary_search(int (&arr)[10], int low, int high, int key) {
  int middle = (low + high) / 2;
  if (low <= high) {
    if (arr[middle] == key) {
      return middle;
    } else if (arr[middle] > key) {
      return rec_binary_search(arr, low, middle - 1, key);
    } else {
      return rec_binary_search(arr, middle + 1, high, key);
    }
  }
  return -1;
}

int main() {
  int sorted_array[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  std::cout << binary_search(sorted_array, 10) << std::endl;
  std::cout << rec_binary_search(sorted_array, 0, 9, 10) << std::endl;
}
