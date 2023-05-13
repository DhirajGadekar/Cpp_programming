
#include<iostream>

#define sum(x,y) x+y
#define z 200

int main() {
	
	int x = 10;
	int y = 30;

	std::cout<< sum(x,y) <<std::endl;
	std::cout<< z <<std::endl;
}

/*
 After Preprocessing :

 int main() {

 int x = 10;
 int y = 30;

 std::cout<< x+y <<std::endl;
 std::cout<< 200 <<std::endl;
 }
 */
