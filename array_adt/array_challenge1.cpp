#include <iostream>
#include <iterator>
#include <vector>

std::vector<int> find_missing_elemetns(int size, int param[]) {
  std::vector<int> bitset(size, 0);
  std::vector<int> output;
  for (int i = 0; i < size; i++) {
    int num = param[i];
    bitset[num] = 1;
  }

  for (int i = 0; i < size; i++) {
    if (bitset[i] != 1) {
      output.push_back(i);
    }
  }
  return output;
}
std::vector<int> find_missing_elements_no_space(int size) {}
int main() {
  int arr[]{3, 7, 4, 9, 12, 6, 1, 11, 2, 10};
  std::vector vec = find_missing_elemetns(10, arr);
  for (int num : vec) {
    std::cout << num << " ";
  }
  std::cout << std::endl;
  return 0;
}
