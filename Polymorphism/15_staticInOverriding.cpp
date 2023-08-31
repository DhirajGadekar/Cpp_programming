#include<iostream>

class Parent {

	public:
		//virtual static void getData() {  Error
		
		static void getData() {
			
			std::cout << "Parent getData" << std::endl;
		}
};

class Child : public Parent {

	public:
		static void getData() {
			
			std::cout << "Child getData" << std::endl;
		}
};

int main() {
	
	Parent *obj = new Child();
	obj->getData();
	return 0;
}
