#include<iostream>

class Demo {
	
	public :
		int x = 10;
		static int y;

	void fun();	
};

int Demo :: y = 20;

void Demo :: fun() {
	
	std::cout << x << std::endl;
	std::cout << y << std::endl;
}

int main() {
	
	Demo obj1;
	Demo obj2;

	obj1.fun();
	obj2.fun();

	obj1.x = 50;
	obj2.y = 1000;

	obj1.fun();
	obj2.fun();

	return 0;
}
