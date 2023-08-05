#include<iostream>

class Parent {
	
	int x  = 10;
	public:
		Parent() {
		
			std::cout << "Parent Constructor" << std::endl;
		}
		Parent(Parent &obj) {
			
			std::cout << "Copy" << std::endl;
		}
		friend std::ostream& operator<<(std::ostream& out, const Parent& obj) {
			
			out<< "In Parent " << std::endl;
			out<< obj.x;
			return out;
		}
};

class Child : public Parent {
	
	int x = 20;
	public:
		Child() {
			
			std::cout << "Child Constructor" << std::endl;
		}
		friend std::ostream& operator<<(std::ostream& out, const Child& obj) {
			
			out << "In Child" << std::endl;
			out << obj.x;
			return out;
		}
};

int main() {
	
	Child obj;
	std::cout << obj << std::endl;
	std::cout << (const Parent&)obj << std::endl;  //Typecast
	std::cout << (const Parent)obj << std::endl;  //Typecast without refernce / call copy Constructor
	return 0;
}
