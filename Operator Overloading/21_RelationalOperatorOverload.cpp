#include<iostream>

class Demo {
	
	int x;
	public:
		Demo(int x) {

			this->x = x;
		}
		friend int operator<(const Demo& obj1, const Demo& obj2) {
			
			return (obj1.x < obj2.x);
		}
};

int main() {
	
	Demo obj1(10);
	Demo obj2(20);
	std::cout << (obj1 < obj2) << std::endl;
}
