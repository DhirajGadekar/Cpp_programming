#include<iostream>

class Parent {
	
	int x = 10;
	public:
		Parent() {
			
			std::cout << "Parent Constructor" << std::endl;
		}
		Parent(Parent& obj) {
			
			std::cout << "Copy Constructor" << std::endl;
		}
		void getData() {
			
			std::cout << "Parent x : " << x << std::endl;
		}
};

class Child : public Parent {
	
	int x = 20;
	public:
		Child() {
			
			std::cout << "Child Constructor" << std::endl;
		}
		void getData() {
			
			/* *
			 * Method 1:
			 * Parent::getData();
			 */
			std::cout << "Child x : " << x << std::endl;
		}
};

int main() {

	Child obj;
	obj.getData();

	/* *
	 * Method 2: 
	 * (Parent(obj)).getData();
	 *
	 * Method 3:
	 * obj.Parent::getData();
	 *
	 * Method 4:
	 * (static_cast<Parent&>(obj)).getData();
	 *
	 * Method 5:
	 */
	((Parent& )obj).getData();
	return 0;
}
