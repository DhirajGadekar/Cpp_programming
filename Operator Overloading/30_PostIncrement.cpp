#include<iostream>

class Demo {
	
	int x;
	public:
		Demo(int x) {

			this->x = x;
		}
		int operator++(int) {
			
			int temp = x;
			x++;
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
