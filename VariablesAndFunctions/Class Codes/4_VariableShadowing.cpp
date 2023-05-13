//Global Variable Shadowing :

#include<iostream>

int x = 10;
int main() {
	int x = 20;

	std::cout<< x <<std::endl;      //Priority to Local Variable
	std::cout<< ::x <<std::endl;    //Use :: (Scope Resolution) for Accessing Gloable variable
	return 0;
}
