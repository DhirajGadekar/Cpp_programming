#include<iostream>

class Demo{

	public:
	Demo() {

		std::cout<<"In No-Args Constructor"<<std::endl;
	}
	Demo(int x){ 		   //Parameterized constructor
		
		std::cout<<"In para Constructor"<<std::endl;
	}
};

int main() {
	
	Demo obj1;
	Demo *obj2 = new Demo();

	Demo obj3(10);
	Demo *obj4 = new Demo(10);

	return 0;
}
