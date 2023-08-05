#include<iostream>

class Parent {

	public:
		int x = 30;
		void getData() {
			
			std::cout << x << std::endl;
		}
};

class Child : public Parent{
	
	void getData() = delete;
};

int main() {
	
	Child obj;
	std::cout << obj.x << std::endl;
	obj.getData();   //Error: use of deleted function ‘void Child::getData()’
	return 0;
}
