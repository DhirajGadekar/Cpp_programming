#include<iostream>

class Parent {
	
	int x = 10;
	int y = 20;
	public:
		void printData() {
			
			std::cout << x << y << std::endl;
		}
};

class Child : public Parent {
	
	int z = 30;
	public:
		void getData() {
			
			std::cout << z << std::endl;
		}
};

int main() {
	
	Parent obj1;
	Child obj2;

	std::cout << sizeof(obj1) << std::endl;
	std::cout << sizeof(obj2) << std::endl;
	return 0;
}
