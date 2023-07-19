#include<iostream>

template<typename T>
T min(T x, T y);

template<>
char min<char>(char x, char y) {
		
	std::cout << "Template-Function" << std::endl;
	return (x < y)? x : y;
}

template<>
int min<int>(int x, int y) {
		
	std::cout << "Template-Function" << std::endl;
	return (x < y)? x : y;
}

template<>
float min<float>(float x, float y) {
		
	std::cout << "Template-Function" << std::endl;
	return (x < y)? x : y;
}

template<>
double min<double>(double x, double y) {
		
	std::cout << "Template-Function" << std::endl;
	return (x < y)? x : y;
}

char min(char x, char y) {
	
	std::cout << "Normal-Function" << std::endl;
	return (x < y)? x : y;
}

int min(int x, int y) {
	
	std::cout << "Normal-Function" << std::endl;
	return (x < y)? x : y;
}

float min(float x, float y) {
	
	std::cout << "Normal-Function" << std::endl;
	return (x < y)? x : y;
}

double min(double x, double y) {
	
	std::cout << "Normal-Function" << std::endl;
	return (x < y)? x : y;
}

int main() {
	
	std::cout << min('A', 'B') << std::endl;
	std::cout << min(10, 20) << std::endl;
	std::cout << min(30.5f, 20.5f) << std::endl;
	std::cout << min(30.5, 40.5) << std::endl;
	
	std::cout << min<char>('A','B') << std::endl;
	std::cout << min<int>(10,20) << std::endl;
	std::cout << min<float>(30.5f, 20.0f) << std::endl;
	std::cout << min<double>(30.5, 40.5) << std::endl;
	
	return  0;
}
