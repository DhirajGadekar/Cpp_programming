//Final function :

#include<iostream>

class Parent {
	
	public:
		virtual void getData() final {

			std::cout << "Parent Parent" << std::endl;
		} 
};

class Child : public Parent {

	public:
		virtual void getData() {

			std::cout << "Child Parent" << std::endl;
		} 
};

int main() {
	
	Parent *obj = new Child();
	obj->getData();
	return 0;
}

/*
 *   Error: virtual function ‘virtual void Child::getData()’ overriding final function
                    virtual void getData() {
                                 ^~~~~~~
     Note: overridden function is ‘virtual void Parent::getData()’
                     virtual void getData() final {

 */
