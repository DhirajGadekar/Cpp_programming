
#include<iostream>

void display(int x, int y) {
	
	std::cout << x << y << std::endl;
}

void display(int x, float y) {
	
	std::cout << x << y << std::endl;
}

void display(float x, float y) {
	
	std::cout << x << y << std::endl;
}

void display(float x, int y) {
	
	std::cout << x << y << std::endl;
}

int main() {
	
	display(10,20);
	display(10,20.5f);
	display(10.5f,20.5f);
	display(10.5f,20);
	//display(10.5, 20.5);    Error : call of overloaded ‘display(double, double)’ is ambiguous

	return 0;
}
