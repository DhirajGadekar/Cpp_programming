#include<iostream>

class Parent {
	
	public:
		virtual void marry() = 0;
		virtual void property() {
	
			std::cout << "Flat, Car, Gold" << std::endl;
		}
};

void Parent:: marry() {
	
	std::cout << "Parent marry Method" << std::endl;
}
class Child : public Parent {
	
	public:
		void marry() {
			
			Parent::marry();
		}
		
};

int main() {
	
	Parent *obj = new Child();
	obj->marry();
	return 0;
}
