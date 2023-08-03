#include<iostream>

class Demo {
	
	int x;
	public:
		Demo(int x) {
			
			this->x = x;
		}
		friend int operator++(Demo& obj) {
			
			return ++obj.x;
		}

};

int main() {
	
	Demo obj(10);
	std::cout << ++obj << std::endl;
	return 0;
}
