#include<iostream>

class Parent {

	int x = 10;
	int y = 20;
	public:
		Parent(int x, int y) {
			
			std::cout << "Parent Constructor : " << this << std::endl;
			this->x = x;
			this->y = y;
		}

		void getData() {
			
			std::cout << x << " " << y << std::endl; 
		}
};

class Child : public Parent {
	
	int z = 30;
	public:
		Child(int x, int y, int z) : Parent(x,y) {
			
			this->z  = z;
			std::cout << "Child Constructor : " << this << std::endl;
		}

		void printData() {
			
			std::cout << z << std::endl;
		}
};

int main() {
	
	Child obj(40,50,60);
	obj.getData();
	obj.printData();

	return 0;
}
