#include<iostream>

class Demo {
	
	public :
		int x = 10;
		static int y = 20;
};

int main() {
	
	Demo obj1;
	return 0;
}

/*
 O/P :
 	Error: ISO C++ forbids in-class initialization of non-const static member ‘Demo::y’
                    static int y = 20;
                               ^
 */
