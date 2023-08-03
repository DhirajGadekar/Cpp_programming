#include<iostream>

class Parent {
	
	public:
		Parent() {
			
			std::cout << "Parent Constructor" << std::endl;
		}
};
 
class Child : public Parent {
	
	public:
		Child() {

			std::cout << "Child Constructor" << std::endl;
		}
};

int main() {
	
	Child obj;
	return 0;
}
