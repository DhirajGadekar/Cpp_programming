#include<iostream>

class Parent {
	
	public:
		virtual void getData() {
			
			std::cout << "Parent getData " << std::endl;
		}
};

class Child : public Parent {

	public:
		virtual void getData() override {
			
			std::cout << "Child getData " << std::endl;
		}
};

int main() {

	Parent *obj = new Child();
	obj->getData();
	return 0;
}
