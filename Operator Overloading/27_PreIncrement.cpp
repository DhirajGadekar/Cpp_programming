#include<iostream>
	
class Demo {
	
	int x;
	public:
		Demo(int x) {
			
			this->x = x;
		}
		int operator++() {
			
			return ++x;
		}
};

int main() {
	
	Demo obj(4);
	std::cout << ++obj << std::endl;
	return 0;
}
