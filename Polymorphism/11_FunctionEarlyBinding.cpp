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

	switch(choice) {
		
		case 1:
			add(10, 20);
			break;
		case 2:
			sub(30, 20);
			break;

		case 3:
			mul(10, 20);
			break;
	}
	return 0;
}
