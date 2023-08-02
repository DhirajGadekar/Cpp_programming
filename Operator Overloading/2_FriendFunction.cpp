#include<iostream>

class Demo {
	
	int x;
	public:
		Demo(int x) {
			
			this->x = x;
		}

		friend void fun(const Demo& obj);
};

void fun(const Demo& obj) {
	
	std::cout << obj.x << std::endl;
}

int main() {
	
	Demo obj(10);
	fun(obj);
}
