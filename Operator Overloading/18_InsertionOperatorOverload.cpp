#include<iostream>

class Demo {
	
	int x;
	public:
		Demo(int x) {
			
			this->x = x;
		}

		friend std::ostream& operator<<(std::ostream& cout, const Demo& obj) {
			
			cout<< obj.x;
			return cout;
		}
};

int main() {
	
	Demo obj(10);

	std::cout << obj << std::endl;
	return 0;
}
