#include<iostream>

class Player {

        int jerNo = 45;
        std::string name = "Rohit";

        public :
        void info() {                 //internal : info(Player *this)

                std::cout << jerNo << " = " << name << std::endl;
        }
};
int main() {

        Player obj1;                     //Memory : stack Frame ; Internal Call : Player(&obj1);
	
	Player *obj2 = new Player();     //Memory : Heap        ; Internal Call : Player(obj2);
        
	obj1.info();                     //info(&obj)
	(*obj2).info();			 //info(obj)

        return 0;
}

