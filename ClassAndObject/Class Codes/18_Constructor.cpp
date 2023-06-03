#include<iostream>

class Demo {
	
	public :
		int x = 10;
		Demo() {
			
			std::cout << "No-args Constructor" << std::endl;
		}
		Demo(int x) {
			
			std::cout << "No-args Constructor" << std::endl;
		}
		Demo(Demo &obj) {
			
			std::cout << "No-args Constructor" << std::endl;
		}
};

int main() {
	
	Demo obj1;

	Demo obj3 = obj1;

	std::cout << obj1.x << std::endl;
	std::cout << obj3.x << std::endl;

	obj3.x = 50;

	std::cout << obj1.x << std::endl;
	std::cout << obj3.x << std::endl;

	return 0;
}
