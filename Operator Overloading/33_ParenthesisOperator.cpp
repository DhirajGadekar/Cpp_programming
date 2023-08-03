#include<iostream>

class Demo {
	
	int x;
	public:
		Demo(int x) {
			
			this->x = x;
		}
		int operator()(int x, int y) {
			
			return x+y;
		}
};

int main() {
	
	Demo obj(10);

	int num = obj(10,20);
	std::cout << num << std::endl;
	return 0;
}
