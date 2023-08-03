#include<iostream>

class Parent {
	
	public:
		Parent() {
			
			std::cout << "Parent Constructor" << std::endl;
		}
		~Parent() {
			
			std::cout << "Parent Destructor" << std::endl;
		}
		
};
 
class Child : public Parent {
	
	public:
		Child() {

			std::cout << "Child Constructor" << std::endl;
		}
		~Child() {

			std::cout << "Child Destructor" << std::endl;
		}
};

int main() {
	
	Child obj;
	return 0;
}
