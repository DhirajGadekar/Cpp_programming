#include<iostream>

class Demo {
	
	int x;
	public:
		Demo(int x) {
			
			this->x = x;
		}
		int getData() {
			
			return x;
		}
		void setData(int x) {
			
			this->x = x; 
		}
};

int operator--(Demo& obj) {
	
	int x = obj.getData();
	--x;
	obj.setData(x);
	return x;
}

int main() {

	Demo obj(10);

	std::cout << --obj << std::endl;
	std::cout << obj.getData() << std::endl;
	return 0;
}	
