
#include<iostream>

struct Player {

        void playerInfo(int jerNo) {

                std::cout<< "Jercy No : " << jerNo << std::endl;
        }
        void playerInfo(std::string name) {

                std::cout<< "Name : " << name << std::endl;
        }
        void playerInfo(float avg) {

                std::cout<< "Average : " << avg << std::endl;
        }
};

int main() {

    	Player obj;

        obj.playerInfo(45);
        obj.playerInfo("Rohit Sharma");
        obj.playerInfo(45.65f);
       
        return 0;
}
