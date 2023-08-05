#include<iostream>

class Parent {
	
	int x = 10;
	public:
		Parent() {
			
			std::cout << "Parent Constructor" << std::endl;
		}
		void getData() {
			
			std::cout << "Parent x : " << x << std::endl;
		}
};

class Child : public Parent {
	
	int y = 20;
	public:
		Child() {
			
			std::cout << "Child Constructor" << std::endl;
		}
		void printData() {
			
			std::cout << "Child x : " << y << std::endl;
		}
};

int main() {
	
	Child obj;
	obj.getData();
	obj.printData();
	return 0;
}
