
#include<iostream>

int main() {

	int x = 10;
	int y = 20;

	std::cout<< x <<std::endl;
	std::cout<< y <<std::endl;

	int const *const ptr = &x;

	std::cout<< *ptr <<std::endl;
	
	*ptr = 30;
	ptr = &y;

	std::cout<< *ptr <<std::endl;
	return 0;
}

/*
 O/p : 
   Error: assignment of read-only location ‘*(const int*)ptr’
   16 |         *ptr = 30;
      |         ~~~~~^~~~
   Error: assignment of read-only variable ‘ptr’
   17 |         ptr = &y;
      |         ~~~~^~~~

 */
