#include<iostream>

class Demo{

	int x = 10;
	int y = 20;

	public:
	Demo(int x,int y){
	
		this->x = x;
		this->y = y;
	}
	
	void disp(){
	
		std::cout<< x <<std::endl;
		std::cout<< y <<std::endl;
	}
};


int main(){

	Demo obj(100,200);
	obj.disp();

	return 0;
}
