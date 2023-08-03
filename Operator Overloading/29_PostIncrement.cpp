#include<iostream>

class Demo {
	
	int x;
	public:
		Demo(int x) {

			this->x = x;
		}
		friend int operator++(Demo& obj,int) {
			
			int temp = obj.x;
			obj.x++;
			return temp;
		}
		int getData() {
			
			return x;
		}
};

int main() {
	
	Demo obj(10);
	std::cout << obj++ << std::endl;
	std::cout << obj.getData() << std::endl;
	return 0;
}
