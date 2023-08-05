#include<iostream>

class Parent {
	
	int x = 10;
	
	protected:
	int y = 20;

	public:
	int z = 30;

	Parent() {
		
		std::cout << "Parent Constructor" << std::endl;
	}	
};

class Child : private Parent {

	public:
		Child() {
		
			std::cout << "Child Constructor" << std::endl;
		}
};

int main() {
	
	Child obj;
	std::cout << obj.x << obj.y << obj.z << std::endl;    // obj.x, obj.y and obj.z has Error
	return 0;
}

/* obj.x, obj.y, and obj.y are privete after privatly inherit
 * obj.x has private
 * obj.y has protected
 * obj.z has inaccessible
 */
