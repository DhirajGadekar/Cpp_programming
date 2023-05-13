
#include<iostream>

int main() {

	int x = 10;     //

	int y(20);      		//Direct Initialization

	std::cout<< x <<std::endl;
	std::cout<< y <<std::endl;
	
	int z{30};			//Uniform or List or Brash Initialization
	std::cout<< z <<std::endl;
	return 0;
}
