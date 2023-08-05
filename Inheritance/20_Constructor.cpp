#include<iostream>

class Parent {
	
	public:
		Parent() {

		}
		Parent(Parent& obj) {

		}
};

class Child : public Parent {
	
	public:
		Child() {

		}
};

int main() {
	
	Child obj;
	return 0;
}
