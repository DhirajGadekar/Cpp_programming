#include<iostream>

class Parent {
	
	int x = 10;

	protected:
	int y = 20;

	public:
	int z = 30;

	void getInfo() {
		
		std::cout << x << " " << y << " " << z << std::endl;
	}
};

class Child : public Parent {
	
	public:
		void getData() {
			
			getInfo();
		}
};

int main() {
	
	Child obj;
	obj.getData();
	return 0;
}
