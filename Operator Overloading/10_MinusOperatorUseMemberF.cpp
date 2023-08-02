#include<iostream>

class OperatorOverload {
	
	int x;
	public:
		OperatorOverload(int x) {
			
			this->x = x;
		}
		int operator-(const OperatorOverload& obj) {
			
			return obj.x - this->x;
		}
};

int main() {
	
	OperatorOverload obj1(10);
	OperatorOverload obj2(20);

	std::cout << obj1 - obj2 << std::endl;

	return 0;
}
