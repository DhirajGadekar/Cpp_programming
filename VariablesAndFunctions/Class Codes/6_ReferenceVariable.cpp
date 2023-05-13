//Reference Variable : another for variable

#include<iostream>

int main() {

	int x = 10;
	//int &y;         Error : 'y' declared as reference but not initialize
	int &y = x;

	std::cout<< x <<std::endl;
	std::cout<< y <<std::endl;
	return 0;
}

/*
Diagram :
       _______
       |     |
     x | 10  | y
       |_____|
      100    103
 */
