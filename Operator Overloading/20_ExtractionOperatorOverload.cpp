#include<iostream>

class Demo {
	
	int x;
	public:
		friend std::istream& operator>>(std::istream& in, Demo& obj);
		
		int getData() {
			
			return x;
		}
};

std::istream& operator>>(std::istream& in, Demo& obj) {
	
	in >> obj.x;
	return in;
}

int main() {
	
	Demo obj;
	std::cout << "Enter Value " << std::endl;
	std::cin >> obj;
	std::cout << obj.getData() << std::endl;

	return 0;
}
