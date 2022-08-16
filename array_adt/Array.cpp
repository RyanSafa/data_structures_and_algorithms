#include <iostream>

template <class T>

class Array {
private:
  T *A;
  int size;
  int length;

public:
  Array() {
    size = 0;
    length = 0;
    A = new T[10];
  }

  Array(int sz) {
    size = sz;
    length = 0;
    A = new T[size];
  }

  ~Array() { delete[] A; }

  void Display();

  void Insert(int index, T x);

  void find_missing_elements() {
    int i;
    int diff = A[0];

    for (i = 0; i < length; i++) {
      if (A[i] - i != diff) {
        while (A[i] - i > diff) {
          std::cout << diff + i << " ";
          diff++;
        }
      }
    }
		std::cout << std::endl;
  }

  T Delete(int index);
};

template <class T> void Array<T>::Display() {
  for (int i = 0; i < length; i++) {
    std::cout << A[i] << " ";
  }
  std::cout << std::endl;
}

template <class T> void Array<T>::Insert(int index, T x) {
  if (index >= 0 && index <= length) {
    for (int i = length - 1; i >= index; i--) {
      A[i + 1] = A[i];
    }
    A[index] = x;
    length++;
  }
}

template <class T> T Array<T>::Delete(int index) {
  T x = 0;

  if (index >= 0 && index < length) {
    x = A[index];
    for (int i = index; i < length - 1; i++) {
      A[i] = A[i + 1];
    }
    length--;
  }
  return x;
}

int main() {
  Array<int> arr(20);
  arr.Insert(0, 6);
  arr.Insert(1, 7);
  arr.Insert(2, 8);
  arr.Insert(3, 9);
  arr.Insert(4, 11);
  arr.Insert(5, 12);
  arr.Insert(6, 15);
  arr.Insert(7, 16);
  arr.Insert(8, 17);
  arr.Insert(9, 18);
  arr.Insert(10, 19);
  std::cout << "Display Arrray" << std::endl;
  arr.Display();
  std::cout << "Missing elements" << std::endl;
  arr.find_missing_elements();
  return 0;
}
