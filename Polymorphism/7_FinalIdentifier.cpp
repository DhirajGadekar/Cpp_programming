//Final Class :

#include<iostream>

class Parent final {
	
	public :
		Parent() {
			
			std::cout << "Parent Constructor" << std::endl;
		}
};

class Child : public Parent {
	
	
};

int main() {
	
	Parent *obj = new Child();
	return 0;
}

/*
 * Error: cannot derive from ‘final’ base ‘Parent’ in derived type ‘Child’
   		class Child : public Parent {

 */
