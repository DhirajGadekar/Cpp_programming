#include<iostream>

class Parent {
	
	public:
		virtual int getData() {
			
			std::cout << "Parent getData" << std::endl;
			return 10;
		}
};

class Child : public Parent {
	
	public:
		virtual int getData() {
			
			std::cout << "Child GetData" << std::endl;
			return 20;
		}
};

int main() {
	
	Parent *obj = new Child();
	obj->getData();

	return 0;
}
