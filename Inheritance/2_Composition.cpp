#include<iostream>

class Employee {
	
	std::string eName;
       	int empId;
	public:
		Employee() {

		}
		Employee(std::string eName, int empId) {
			
			this->eName = eName;
			this->empId = empId;
		}
		void seteName(std::string eName) {
			
			this->eName = eName;
		}	
		void setempId(int empId) {
			
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
		void setempData(std::string eName, int empId) {
			
			obj.seteName(eName);
			obj.setempId(empId);
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
	obj.setempData("Dhiraj", 255);
	obj.getInfo();

	return 0;
}
