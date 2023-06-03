
#include<iostream>

class Jercy {

	public :
	std::string pName;
	int jerNo;
 	std::string tName;

	public :
	void playerInfo (){
		
		std::cout << "Name : " << pName << std::endl;
		std::cout << "Jercy No : " << jerNo << std::endl;
		std::cout << "Team Name : " << tName << std::endl;

	}
};

int main() {
	
	Jercy obj1;
	
	std::cin >> obj1.pName;
	std::cin >> obj1.jerNo;
	std::cin >> obj1.tName;
	obj1.playerInfo();
	return 0;
}
