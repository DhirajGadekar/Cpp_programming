#include<iostream>

class Parent {

	public:
		virtual void getData() {
			
			std::cout << "Paren Getdata" << std::endl;
		}
};

class Child : public Parent {

	public:
		virtual void getData() {
			
			std::cout << "Child Getdata" << std::endl;
		}
};

int main() {
	
	Parent *obj = new Child();
	obj->getData();
	//Internal Call : obj->_vptr->getData();
	
	std::cout << obj->_vptr << std::endl;

	return 0;
}
