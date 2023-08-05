#include<iostream>

class Parent {
	
	int x = 10;
	public:
		Parent() {
		
			std::cout << "Parent Constructor" << std::endl;
		}
		void getData() {
			
			std::cout << "Parent x = " << x << std::endl;
		}
};

class Child : public Parent {
	
	int x = 20;
	public:
		Child() {
			
			std::cout << "Child Constructor" << std::endl;
		}
		void getData() {
		
			std::cout << "Child x = " << x << std::endl;
		}
};

int main() {

	Parent *obj = new Child();
	obj->getData();          //Compile time bind Parent Function and run also parent function
	return 0;
}
