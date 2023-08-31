#include<iostream>

class SingleTon {

	private:
		SingleTon() {

		}
	
	public:	
	static SingleTon *obj;
	static SingleTon* getObject() {

		return obj;
	}
	void getData() {
		
		std::cout << "This : " << this << std::endl;
	}
};

SingleTon* SingleTon::obj = new SingleTon();
int main() {
	
	SingleTon::getObject()->getData();
	return 0; }
