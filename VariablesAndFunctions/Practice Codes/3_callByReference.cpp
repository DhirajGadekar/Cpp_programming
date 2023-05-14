#include<iostream>

int main() {
	
	int arr[] = {1,2,3,4,5};
	
	int (&arr1)[5] = arr;

	for(int i = 0; i < 5; i++) {
		
		arr1[i] = 10 + i;
	}

	for(int i : arr1) {

		std::cout<< i << std::endl;
	}
	return 0;
}
