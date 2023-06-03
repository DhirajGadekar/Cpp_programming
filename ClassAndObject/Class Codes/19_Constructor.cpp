#include<iostream>

class Demo {
	
	int x = 10;
	int y = 20;

	public :
		Demo() {
			
			std::cout << "No-agrs Constructor" << std::endl;
		}
		Demo(int x = 10, int y = 20) {
			
			this->x = x;
			this->y = y;

			std::cout << "Para Constructor" << std::endl;
			std::cout << x << " " << y << std::endl;
		}	
};

int main() {
	
	Demo obj2;           //Error 

	return 0;
}

/*
 Error: call of overloaded ‘Demo()’ is ambiguous
            Demo obj2;           //Error :
 */
