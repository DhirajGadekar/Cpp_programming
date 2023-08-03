#include<iostream>

class Demo {
	
	int arr[5] = {1,2,3,4,5};
	public:
		void printArray() {
			
			for(int i = 0; i < 5; i++) {
				
				std::cout << arr[i] << " ";
			}
			std::cout << std::endl;
		}

		int& operator[](int Index) {
			
			return arr[Index];
		}
};
int main() {
	
	Demo obj;

	obj.printArray();
	obj[3] = 10;
	obj.printArray();

	return 0;
}
