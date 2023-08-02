#include<iostream>

class Demo {
	
	int x;
	public:
		Demo(int x) {
			
			this->x = x;
		}
		void* operator new(size_t size) {

			void *ptr = malloc(size);
			return ptr;
		}
		int getData() {
		
			return x;
		}	
};

int main() {
	
	Demo *obj = new Demo(30);
	std::cout << obj->getData() << std::endl;
	return 0;
}
