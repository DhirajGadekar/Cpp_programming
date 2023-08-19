#include<iostream>

void add(int x , int y) {
	
	std::cout << x + y << std::endl;
}

void sub(int x, int y) {

	std::cout << x - y << std::endl;
}

void mul(int x, int y) {

	std::cout << x * y << std::endl;
}
int main() {
	
	std::cout << "1.Add" << std::endl;
	std::cout << "2.Sub" << std::endl;
	std::cout << "3.Mul" << std::endl;

	int choice;
	std::cout << "Enter Yiur Choice : " << std::endl;
	std::cin >> choice;
	
	void (*fun)(int , int) = NULL;
	switch(choice) {
		
		case 1:
			fun = add;
			break;
		case 2:
			fun = sub;
			break;

		case 3:
			fun = mul;
			break;
	}
	fun(30, 40);
	return 0;
}
