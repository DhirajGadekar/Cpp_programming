#include<iostream>
	
class Parent {
	
	int x = 10;

	protected:
	int y = 20;

	public:
	int z = 30;
		
		void getData() {
			
			std::cout << x << y << z << std::endl;
		}	
};
class Child : Parent {
	
	public:
		void getInfo() {
			
			std::cout << y << z << std::endl;
		}
};

int main() {

	Child obj;
	obj.getData();
	obj.getInfo();
	return 0;
}

/*
 * Error: ‘void Parent::getData()’ is inaccessible within this context
            obj.getData();
            ~~~~~~~~~~~^~
 */
