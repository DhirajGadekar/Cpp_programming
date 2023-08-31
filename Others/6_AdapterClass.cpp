#include<iostream>

class Parent {
	
	public:
		virtual void fun1() = 0;
		virtual void fun2() = 0;
};

class Adapter : public Parent {
	
	public:
		void fun1() {

		}
		void fun2() {

		}
};

class Child : public Adapter {
	
	public:
		void fun1() {
			
			std::cout << "Fun1 get Body" << std::endl;
		}
};

int main() {
	
	Parent *obj = new Child();
	obj->fun1();
	return 0;
}
