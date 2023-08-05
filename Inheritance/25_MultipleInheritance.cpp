#include<iostream>

class Parent1 {
	
	int x = 20;
	public:
		Parent1() {

			std::cout << "Parent - 1 Constructor" << std::endl;
		}
		void getData() {
			
			std::cout << x << std::endl;
		}
};

class Parent2 {
	
	int x = 30;
	public:
		Parent2() {

			std::cout << "Parent - 2 Constructor" << std::endl;
		}
		void getData() {
			
			std::cout << x << std::endl;
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
	//obj.getData();  //Error: request for member ‘getData’ is ambiguous
	((Parent1&)obj).getData();
	((Parent2&)obj).getData();
	return 0;
}
