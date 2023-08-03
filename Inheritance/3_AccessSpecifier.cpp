#include<iostream>

class Demo {
	
	int x = 10;
	
	protected:
	int y = 20;

	public:
	int z = 30;
};

int main() {
	
	Demo obj;
	std::cout << obj.x << obj.y << obj.z << std::endl;
	return 0;
}

/*
 * Error: ‘int Demo::x’ is private within this context
           std::cout << obj.x << obj.y << obj.z << std::endl;
                           ^
 */

/*
 * Error: ‘int Demo::y’ is protected within this context
           std::cout << obj.x << obj.y << obj.z << std::endl;
	   			     ^
 */

