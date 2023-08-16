#include<iostream>

class Parent {

        public:
                Parent() {

                        std::cout << "Parent Constructor" << std::endl;
                }

                virtual void getData() {

                        std::cout << "Parent getData" << std::endl;
                }
};

class Child : public Parent {

        public:
                Child() {

                        std::cout << "Child Constructor" << std::endl;
                }

                virtual void getData() {               //implicitely virtual comes here .......

                        std::cout << "Child getData" << std::endl;
                }
};

int main() {
	
	/*
	Parent *obj = new Child();                Object Created on Head
       	obj->getData();	
	*/

	/*
	Child obj1;                               Object Created on Stack
	Parent *obj2 = &obj1;
	obj2->getData();
	*/

	Child obj;
	Parent& obj1 = obj;
	obj1.getData();

	return 0;
}
