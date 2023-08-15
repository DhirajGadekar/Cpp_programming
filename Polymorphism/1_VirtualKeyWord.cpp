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

class Child : public Parent {

	public:
		Child() {
			
			std::cout << "Child Constructor" << std::endl;
		}

		void getData() {               //implicitely virtual comes here .......
			
			std::cout << "Child getData" << std::endl;
		}
};

int main() {

	Parent *obj = new Child();
	obj->getData();

	return 0;
}
