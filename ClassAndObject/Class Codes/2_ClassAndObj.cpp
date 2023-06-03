
#include<iostream>

class Player {
	
	std::string pName = "Rohit Sharma";
	int jerNo = 45;
	float avg = 56.43f;
	
	public :
	void playerInfo() {
		
		std::cout << "Name : " << pName << std::endl;
		std::cout << "Jercy NO : " << jerNo << std::endl;
		std::cout << "Average : " << avg << std::endl;
	}
};

int main() {
	
	Player obj;
	obj.playerInfo();

	return 0;
}
