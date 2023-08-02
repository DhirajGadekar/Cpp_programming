#include<iostream>

class Demo {
	
	public:
		void fun() {
			
			std::cout << "No Parameter Fun" << std::endl;
		}
		void fun(int x) {
			
			std:: cout << "Para Fun" << std::endl;
		}
};

int main() {
	
	Demo obj;
	
	obj.fun();
	obj.fun(10);
}
