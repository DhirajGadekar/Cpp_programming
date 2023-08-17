#include<iostream>

class Parent {
	
	public:
		virtual void getData() const{
			
			std::cout << "Parent GetData" << std::endl;
		}
};

class Child : public Parent {

	public:
		virtual void getData() {
			
			std::cout << "Child GetData" << std::endl;
		}
};

int main() {
	
	Parent *obj = new Child();
	obj->getData();
	return 0;
}
