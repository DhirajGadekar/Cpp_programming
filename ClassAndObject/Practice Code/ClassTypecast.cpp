#include<iostream>

class Demo {

	int x = 10;
	float y = 12.5f;
	public:
		Demo() {

		}
		Demo(int x, float y) {
			
			this->x = x;
			this->y = y;
		}
		void getData() {
			
			std::cout << x << std::endl;
			std::cout << (float)y << std::endl;
		}
	
};
int main() {
	
	Demo obj1;
	obj1.getData();
	Demo obj = (Demo){40, 45.6f};
	obj.getData();

	return 0;
}
