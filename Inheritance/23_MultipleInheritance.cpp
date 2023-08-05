#include<iostream>

class Parent1 {
	
	public:
		Parent1() {

			std::cout << "Parent - 1 Constructor" << std::endl;
		}
};

class Parent2 {
	
	public:
		Parent2() {

			std::cout << "Parent - 2 Constructor" << std::endl;
		}
};

class Child : public Parent1, public Parent2 {
	
	public:
		Child() {
			
			std::cout << "Child Constructor" << std::endl;
		}
};

int main() {
	
	Child obj;
	return 0;
}
