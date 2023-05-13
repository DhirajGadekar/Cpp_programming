
#include<iostream>

int main() {
	
	int x = 10;
	int y = 23.4f;

	std::cout<< x <<std::endl;
	std::cout<< y <<std::endl;
		
	int a{10};
	int b{10.4f};

	std::cout<< a <<std::endl;
	std::cout<< b <<std::endl;

	return 0;
}

/*
 O/p :
 Eerror: narrowing conversion of ‘1.03999996e+1f’ from ‘float’ to ‘int’ [-Wnarrowing]
   13 |         int b{10.4f};

 */
