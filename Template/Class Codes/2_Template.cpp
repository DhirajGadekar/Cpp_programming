#include<iostream>

template<typename T>

T min(T x, T y) {
	
	return (x < y) ? x : y;
}
int main() {
	
	std::cout << min('A','B') << std::endl;
	std::cout << min(10,20) << std::endl;
	std::cout << min(30.5f,20.0f) << std::endl;
	std::cout << min(30.5,10.5) << std::endl;

	return 0;
}
