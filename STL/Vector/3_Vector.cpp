#include<iostream>
#include<vector>

class Player {
	
	int jerNo;
	std::string name;
	public:
		Player(int jerNo, std::string name) {
			
			this->jerNo = jerNo;
			this->name = name;
		}

		void info() {
		
			std::cout << jerNo << " : " << name << std::endl;
		}
};

int main() {
	
	Player one(18, "Virat");
	Player two(7, "MSD");
	Player three(45, "Rohit");

	std::vector<Player> obj = {one, two, three};
	
	for(int i = 0; i < obj.size(); i++) {
		
		obj[i].info();
	}
	return 0;
}
