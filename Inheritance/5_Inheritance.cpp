#include<iostream>

class Parent {
	
	int x = 10;

	protected:
	int y = 20;

	public:
	int z = 30;

	Parent() {

	}
	Parent(int x, int y, int z) {
		
		this->x = x;
		this->y = y;
		this->z = z;
	}

	void getInfo() {
		
		std::cout << x << y << z << std::endl;
	}
};

class Child : public Parent {
	
	public:
		Child(int x, int y, int z) {
			
			Parent(x,y,z);              //Create New Object
		}
		void getData() {
			
			getInfo();
		}
};

int main() {
	
	Child obj(40,50,60);
	obj.getData();
	return 0;
}
