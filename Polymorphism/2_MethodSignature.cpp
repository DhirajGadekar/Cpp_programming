#include<iostream>

class Parent {
	
	public:
		Parent() {
			
			std::cout << "Parent Constructor" <<std::endl;
		}
		virtual void getData(int x) {
			
			std::cout << "Parent GetData" << std::endl;
		}
		virtual void printData(float x) {
			
			std::cout << "Parent printData" << std::endl;
		}
};

class Child : public Parent {
	
	public:
		Child() {
			
			std::cout << "Child Constructor" <<std::endl;
		}
		virtual void getData(short int x) {
			
			std::cout << "Child GetData" << std::endl;
		}
		virtual void printData(float x) {
			
			std::cout << "Child printData" << std::endl;
		}
};

int main() {
	
	Parent *obj = new Child();
	obj->getData(10);
	obj->printData(23.6f);
}
