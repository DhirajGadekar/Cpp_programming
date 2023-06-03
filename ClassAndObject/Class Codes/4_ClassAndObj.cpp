#include<iostream>

class Demo {
	
	int x = 10;
	int y = 20;

	public:
	Demo() {
		
		std::cout << "In Constructor" << std::endl;
	}

	void fun() {

		std::cout << x << "  " << y << std::endl;
	}
};

int main() {
	
	Demo *obj = new Demo();

	(*obj).fun();

	delete obj;

	obj->fun();

	return 0;
}
