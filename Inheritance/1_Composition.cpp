#include<iostream>

class Employee {
	
	std::string eName = "Dhiraj";
       	int empId = 255;
	public:
		Employee() {
			
			this->eName = eName;
			this->empId = empId;
		}	
		void getInfo() {
			
			std::cout << eName << " " << empId << std::endl;
		}	
		~Employee() {
			
			std::cout << "Emp Destructor" << std ::endl;
		}
};

class Company {
	
	std::string cName;
	int strEmp;
	Employee obj;
	public:
		Company(std::string cName, int strEmp) {
			
			this->cName = cName;
			this->strEmp = strEmp;
		}
		void getInfo() {

			std::cout << cName << " " << strEmp << std::endl;
			obj.getInfo();
		}
		~Company() {
			
			std::cout << "Com Destructor" << std::endl;
		}
};
int main() {
	
	Company obj("Google", 10000);
	obj.getInfo();

	return 0;
}
