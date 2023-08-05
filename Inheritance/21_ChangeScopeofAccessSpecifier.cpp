#include<iostream>

class Parent {
	
	int x = 10;
	
	protected:
	int y = 20;

	public:
	int z =30;

	void getData() {

		std::cout << x << y << z << std::endl;
	}
};

class Child : public Parent {
		
	using Parent::getData;    // Convert public to private
	public:
		using Parent::y;  //Convert protected to Public
};

int main() {
	Child obj;
	std::cout << obj.y << " " << obj.z << std::endl;
	//obj.getData();         // Error: ‘void Parent::getData()’ is inaccessible within this context
	return 0;
}
