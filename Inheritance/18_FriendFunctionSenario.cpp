#include<iostream>

class Parent {
	
	int x  = 10;
	public:
		friend std::ostream& operator<<(std::ostream& out, const Parent& obj) {
			
			out<< "In Parent " << std::endl;
			out<< obj.x;
			return out;
		}
};

class Child : public Parent {

};

int main() {
	
	Child obj;
	std::cout << obj << std::endl;
	return 0;
}
