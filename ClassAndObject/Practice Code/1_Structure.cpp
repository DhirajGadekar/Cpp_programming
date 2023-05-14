
#include<iostream>

struct Player {

        int jerNo = 45;

        std::string pName = "Rohit Sharma";

        int playerInfo(int x) {

                std::cout << x << std::endl;
                std::cout<< "Name :" << pName << std::endl;
                std::cout<< "Jercy No :" << jerNo << std::endl;

                return x + 10;
        }
};

int main() {

        Player obj;

        std::cout<< obj.pName << std::endl;
        std::cout<< obj.jerNo << std::endl;

        int ret = obj.playerInfo(20);
        std::cout << ret << std::endl;
        return 0;
}
