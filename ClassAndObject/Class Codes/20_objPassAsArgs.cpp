#include<iostream>

class Demo {

	int x = 10;
	int y = 20;

	public :
		Demo() {

			std::cout << "No-args" << std::endl;
			std::cout << x << " " << y << std::endl;
		}
		Demo(int x, int y) {
			
			this->x = x;
			this->y = y;

			std::cout << "Para" << std::endl;
			std::cout << x << " " << y << std::endl;
		}
		Demo(Demo &obj) {
			
			std::cout << "Copy Constructor" << std::endl;
		}
		void info(Demo obj) {
			
			std::cout << x << " " << y << std::endl;
			std::cout << obj.x <<" "<< obj.y << std::endl;
		}
};

int main() {
	Demo obj1;
	Demo obj2(100,200);
	
	obj2.info(obj1);
	return 0;
}
