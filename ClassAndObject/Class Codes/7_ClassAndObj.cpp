#include<iostream>

class Player {
	
	int jerNo;
	std::string name;

	public :
	void info() {
	
		std::cout << jerNo << " = " << name << std::endl;
	}
};
int main() {
	
	Player vk;
	vk.info();

	return 0;
}
