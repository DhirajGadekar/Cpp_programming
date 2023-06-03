#include<iostream>

class Company {
	
	int countEmp = 3000;
	std::string name = "Nvidia";

	public:
	Company() {

		std::cout << "In Company Constructor" << std::endl;
	}

	void comInfo() {
		
		std::cout << countEmp << "\n" << name << std::endl;
	}
};

class Employee {
	
	int empId = 10;
	float empSal = 45.00f;

	public :

	Employee() {
		
		std::cout << "In Employee Constructor" << std::endl;
	}

	void empInfo() {

		Company obj;

		std::cout << empId << "\n" << empSal << std::endl;

		obj.comInfo();
	}
};

int main() {
	
	Employee *emp = new Employee();

	emp->empInfo();
	return 0;
}
