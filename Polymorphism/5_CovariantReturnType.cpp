#include<iostream>

class Parent {
	
	public:
		virtual Parent* getData() {
			
			std::cout << "Parent Getdata" << std::endl;
			Parent *obj = new Parent();
			return obj;
		}
};

class Child : public Parent {

	public:
		virtual Child* getData() {
			
			std::cout << "Child Getdata" << std::endl;
			Child *obj = new Child();
			return obj;
		}
};

int main() {
	
	Parent *obj = new Child();
	obj->getData();
	return 0;
}
