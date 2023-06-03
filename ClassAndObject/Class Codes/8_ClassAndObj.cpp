#include<iostream>

class Player {

        int jerNo = 18;
        std::string name = "Virat";

        public :
        void info() {

                std::cout << jerNo << " = " << name << std::endl;
        }
};
int main() {

        Player vk;
        vk.info();

        return 0;
}

