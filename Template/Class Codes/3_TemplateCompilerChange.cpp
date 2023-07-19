#include<iostream>

template<typename T>
T min(T x, T y);

template<>
char min<char>(char x, char y) {
	
	return (x < y)? x : y;
}

template<>
int min<int>(int x, int y) {
	
	return (x < y)? x : y;
}

template<>
float min<float>(float x, float y) {
	
	return (x < y)? x : y;
}

template<>
double min<double>(double x, double y) {
	
	return (x < y)? x : y;
}
int main() {
	
	std::cout << min<char>('A','B') << std::endl;
	std::cout << min<int>(10,20) << std::endl;
	std::cout << min<float>(30.0f, 20.0f) << std::endl;
	std::cout << min<double>(30.5, 40.5) << std::endl;

	return 0;
}
