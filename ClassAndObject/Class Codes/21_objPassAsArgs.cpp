#include<iostream>

class Demo {

	int x = 10;
	int y = 20;

	public :
	Demo() {

		std::cout << "No-args Constructor" << std::endl;
	}

	Demo(int x, int y) {
		
		this->x = x;
		this->y = y;

		std::cout << "Para Constructor" <<std::endl;
	}

	Demo(Demo &ref) {
		
		std::cout << "Copy Constructor" << std::endl;
	}

	Demo& fun(Demo &obj) {
		
		obj.x = 700;
		obj.y = 800;

		return obj;
	}

	void access() {
		
		std::cout << x << " " << y << std::endl;
	}
};

int main() {

	Demo obj1;
	obj1.access();

	Demo obj2(100,200);
	obj2.access();

	Demo obj3 = obj2.fun(obj1);
	obj1.access();
	obj3.access();
	return 0;
}
