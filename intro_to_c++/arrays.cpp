#include <iostream>
#include <iterator>

int main() {
	// arrays are immutable 
	
	// different ways of initailzing arrays
	int array_test[5];
	int array[5] = {1,2,3,4,5};
	int array_3[] = {1,2,3};
	int array_2[] {1,2,3};

	for (int i=0; i < std::size(array); i++) {
		std::cout << array[i] << std::endl;
	}

	for (int num: array) {
		std::cout << num << std::endl;
	}

	return 0;
}





