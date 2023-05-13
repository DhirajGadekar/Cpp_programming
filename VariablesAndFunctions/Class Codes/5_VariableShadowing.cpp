
#include<iostream>

int main() {
	
	int x = 10;

	{
	
		int x = 20;
		std::cout<< x <<std::endl;
		std::cout<< ::x <<std::endl;

	}
	std::cout<< x <<std::endl;
	return 0;
}

/*
 O/p :
   Error: ‘::x’ has not been declared
   12 |                 std::cout<< ::x <<std::endl;
				      ^
 */
