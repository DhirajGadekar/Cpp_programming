#include<iostream>

class Demo {
	
	int x = 20;

	public :
	int y = 30;

	protected : 
	int z = 40;
};

int main() {
	
	Demo *obj = new Demo();

	std::cout << (*obj).x << std::endl;    //Error
	std::cout << obj->y << std::endl;
	std::cout << obj->z << std::endl;    //Error
}

/*
 O/P :
 	Error: ‘int Demo::x’ is private within this context
             std::cout << (*obj).x << std::endl;    //Error
						    //
	Error: ‘int Demo::z’ is protected within this context
   	     std::cout << obj->z << std::endl;    //Error

 */
