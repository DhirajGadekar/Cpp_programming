#include<iostream>

template<typename T, typename U>

auto min(T x, U y) {
	
	/*if(x < y) {
		
		return x;
	} else {
		
		return y;
	}
	
	* Error: inconsistent deduction for auto return type: ‘int’ and then ‘float’
	*/

	return (x < y)? x : y;
}
int main() {
	
	std::cout << min(10, 7.5f) << std::endl;
	std::cout << min(100, 'A') << std::endl;

	return 0;
}
