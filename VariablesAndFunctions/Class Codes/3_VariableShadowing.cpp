//Local variable Shadowing :

#include<iostream>

int main() {
	
	int x = 10;
	{
		int x = 20;
		std::cout<< x <<std::endl;
		x = 30;
	}
	std::cout<< x <<std::endl;

	return 0;
}
