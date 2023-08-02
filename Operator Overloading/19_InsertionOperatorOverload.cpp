#include<iostream>

class Demo {
	
	int x;
	public:
		Demo(int x) {
			
			this->x = x;
		}
		int getData() const{
			
			return x;
		}
};

std::ostream& operator<<(std::ostream& cout, const Demo& obj) {
	
	cout << obj.getData();
	return cout;
}

int main() {
	
	Demo obj(20);
	std::cout << obj << std::endl;

	return 0;
}
