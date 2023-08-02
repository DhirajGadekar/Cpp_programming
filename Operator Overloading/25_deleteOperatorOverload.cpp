#include<iostream>
	
class Demo {

	int x;
	public:
		Demo(int x) {
			
			this->x = x;
		}
		void operator delete(void *ptr) {
			
			free(ptr);
		}		
		~Demo() {
			
			std::cout << "Object Deleted" << std::endl;
		}
};

int main() {
	
	Demo *obj = new Demo(10);
	delete obj;
	return 0;
}
