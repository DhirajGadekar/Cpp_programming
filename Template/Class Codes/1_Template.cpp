#include<iostream>

char min(char x, char y) {
	
	return (x < y)? x : y;
}

int min(int x, int y) {
	
	return (x < y)? x : y;
}
float min(float x, float y) {
	
	return (x < y)? x : y;
}
double min(double x, double y) {
	
	return (x < y)? x : y;
}
int main() {
	
	std::cout << min('A','B') << std::endl;
	std::cout << min(10,20) << std::endl;
	std::cout << min(30.5f,20.5f) << std::endl;
	std::cout << min(30.5,10.5) << std::endl;

	return 0;
}
