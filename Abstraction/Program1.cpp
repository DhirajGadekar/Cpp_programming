#include<iostream>

class Parent {
	
	public:
		virtual void marry() = 0;
		virtual void property() {
	
			std::cout << "Flat, Car, Gold" << std::endl;
		}
};

class Child : public Parent {
	
	public:
		void marry() {
			
			std::cout << "Marry" << std::endl;
		}
		
};

int main() {
	
	Parent *obj = new Child();
	obj->marry();
	return 0;
}
