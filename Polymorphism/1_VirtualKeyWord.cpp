#include<iostream>

class Parent {

	public:
		Parent() {
			
			std::cout << "Parent Constructor" << std::endl;
		}

		virtual void getData() {
			
			std::cout << "Parent getData" << std::endl;
		}
};

class Child1 : public Parent {

	public:
		Child1() {
			
			std::cout << "Child1 Constructor" << std::endl;
		}

		void getData() {               //implicitely virtual comes here .......
			
			std::cout << "Child1 getData" << std::endl;
		}
};

class Child2 : public Child1 {
	
	public:
		Child2() {
			
			std::cout << "Child2 Constructor" << std::endl;
		}

		void getData() {               //implicitely virtual comes here .......
			
			std::cout << "Child2 getData" << std::endl;
		}
};

int main() {

	Parent *obj = new Child2();
	obj->getData();

	return 0;
}
