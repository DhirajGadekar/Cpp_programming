#include<iostream>

class Demo {

        int x = 10;
        int y = 20;

        public :
        void info() {

                std::cout << this << std::endl;
                std::cout << (*this).x << std::endl;
                std::cout << this->y << std::endl;
        }
};

int main() {

        Demo obj;

        obj.info();

        return 0;
}

