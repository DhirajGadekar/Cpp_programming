#include<iostream>

class Demo {
	
	int x;
	public:
		Demo(int x) {
			
			this->x = x;
		}
		int operator==(const Demo& obj) {

			return (this->x == obj.x);
		}
};

int main() {
	
	Demo obj1(20);
	Demo obj2(30);

	std::cout << (obj1 == obj2) << std::endl;

	return 0;
}
