#include<iostream>

template<typename T>

struct Node {
	
	T data;
	Node *next;
};

template<class T>
class SinglyLinkedList {

	Node<T> *head = NULL;
	public:
		
		Node<T>* createNode(T data) {
	
			Node<T> *newNode = (Node<T>*)malloc(sizeof(Node<T>));

			newNode->data = data;
			newNode->next = NULL;

			return newNode;
		}
		void addNode(T data) {
			
			Node<T> *newNode = createNode(data);
			
			if(head == NULL) {

				head = newNode;
			} else {
				
				Node<T> *temp = head;

				while(temp->next != NULL) {

					temp = temp->next;
				}
				temp->next = newNode;
			}
		}	
		T countNodes() {
			
			int count = 0;
			Node<T> *temp = head;
			while(temp != NULL) {
				
				count++;
				temp = temp->next;
			}
			return count;
		}
		void addFirstNode(T data) {
			
			Node<T> *newNode = createNode(data);
			if(head == NULL) {
				
				head == newNode;
			} else {
				
				newNode->next = head;
				head = newNode;
			}
		}
		void AddAtPos(T data,T pos) {
			
			int count = countNodes();
			if(pos == 1) {

				addFirstNode(data);
			} else if(pos == count + 1) {

				addNode(data);
			} else {

				Node<T> *newNode = createNode();
				Node<T> *temp = head;

				while(pos - 2) {

					temp = temp->next;
					pos--;
				}
				newNode->next = temp->next;
				temp->next = newNode;
			}
		}
		void deleteFirstNode();
		void deleteLastNode();
		void deleteAtPos();
		void printSLL() {
			
			if(head == NULL) {

				std::cout << "Linked List is Empty" << std::endl;
			} else {
				
				Node<T> *temp = head;
				while(temp->next != NULL) {
					
					std::cout << "|" << temp->data <<"|->" ;
					temp = temp->next;
				}
				std::cout << "|" << temp->data <<"|" << std::endl;
			}		

		}
};

template<typename T>
T getData(T x) {
	
	T data;
	std::cout << "Enter the Data : " << std::endl;
	std::cin >> data;

	return data;
}
int main() {
	
	char ch;
	do {
		int choice;
		std::cout << "1.Singly Linked list\n2.Doubly Linked List\n3.Singly Circular Linked List\n4.Doubly Circular Linked List\n" << std::endl;
		std::cin >> choice;

		switch(choice) {

			case 1 :{
					char ch1;
					do {
						int choice1;
						std::cout << "---------------------------------Singly Linked List-------------------------------------" << std::endl;
						std::cout << "1.Integer Singly Linked List.\n2.Character Singly Linked List.\n3.Float Singly Linked List.\n4.Double Singly Linked List." << std::endl;
						std::cout << "----------------------------------------------------------------------------------------" << std::endl;
						std::cout << "Enter your Choice : " << std::endl;
						std::cin >> choice1;

						if(choice1 == 1) {
							
							SinglyLinkedList<int> obj;
							char ch2;
							do {
								int choice2;
								std::cout << "-----------------------------------" << std::endl;
								std::cout << "1.AddNode\n2.Add First node\n3.Add At position\n4.Delete First Node\n5.Delete Last Node\n6.Delete At Position Node\n7.Count Nodes\n8.Print Node\n" << std::endl;
								std::cout << "-----------------------------------" << std::endl;
								std::cout << "Enter Your Choice : " <<std::endl;
								std::cin >> choice2;

								switch(choice2) {
									
									case 1:{
											int num;
											std::cout << "Enter No of Node : " << std::endl;
											std::cin >> num;
											for(int i = 0; i < num; i++) {
											
												int data = getData(i);
												obj.addNode(data);
											}
									       }
									       break;
									
									case 2:{
											
											int data;
											std::cout << "Enter the Data : " << std::endl;
											std::cin >> data;
											obj.addFirstNode(data);
									       }
									       break;

									case 3:{
											int pos;
											std::cout << "Enter Node Position : " << std::endl;
											std::cin >> pos;

											int count1 = obj.countNodes();

											if(pos <= 0 || pos > count1 + 1) {
												
												std::cout << "Wrong Position" << std::endl;
											} else {
												
												
											}
									       }
									       break;

									case 4:
									       break;

									case 5:
									       break;

									case 6:
									       break;

									case 7:
									       break;

									case 8:{
											
										       obj.printSLL();
									       }
									       break;
								}
								std::cout << "Do you want perform any another Operation on Linked List" << std::endl;
								std::cin >> ch2;
							} while(ch2 == 'Y' || ch2 == 'y');
						} else if(choice1 == 2) {

						} else if(choice1 == 3) {

						} else if(choice1 == 4) {

						} else {
							
							std::cout << "Wrong Choice" << std::endl;
						}
						
						std::cout << "\nDo You Want to Create any Singly Linked List" << std::endl;
						std::cin >> ch1;
					} while(ch1 == 'Y' || ch1 == 'y');
				}
				break;
			case 2 :{
					
					char ch1;
					do {
						int choice1;
						std::cout << "---------------------------------Doubly Linked List-------------------------------------" << std::endl;
						std::cout << "1.Integer Doubly Linked List.\n2.Character Doubly Linked List.\n3.Float Doubly Linked List.\n4.Double Doubly Linked List." << std::endl;
						std::cout << "----------------------------------------------------------------------------------------" << std::endl;
						std::cout << "Enter your Choice : " << std::endl;
						std::cin >> choice1;

						if(choice1 == 1) {

						} else if(choice1 == 2) {

						} else if(choice1 == 3) {

						} else if(choice1 == 4) {

						} else {
							
							std::cout << "Wrong Choice" << std::endl;
						}
						
						std::cout << "Do You Want to Create any Doubly Linked List" << std::endl;
						std::cin >> ch1;
					} while(ch1 == 'Y' || ch1 == 'y');
					
				}
				break;
			case 3 :{
					
					char ch1;
					do {
						int choice1;
						std::cout << "----------------------------------Singly Circular Linked List------------------------------------" << std::endl;
						std::cout << "1.Integer Singly Circular Linked List.\n2.Character Singly Circular Linked List.\n3.Float Singly Circular Linked List.\n4.Double Singly Circular Linked List." << std::endl;
						std::cout << "-------------------------------------------------------------------------------------------------" << std::endl;
						std::cout << "Enter your Choice : " << std::endl;
						std::cin >> choice1;

						if(choice1 == 1) {

						} else if(choice1 == 2) {

						} else if(choice1 == 3) {

						} else if(choice1 == 4) {

						} else {
							
							std::cout << "Wrong Choice" << std::endl;
						}
						
						std::cout << "\nDo You Want to Create any Singly Circular Linked List" << std::endl;
						std::cin >> ch1;
					} while(ch1 == 'Y' || ch1 == 'y');
				}
				break;
			case 4:{
					
					char ch1;
					do {
						int choice1;
						std::cout << "-------------------------------Doubly Circular Linked List---------------------------------------" << std::endl;
						std::cout << "1.Integer Doubly Circular Linked List.\n2.Character Doubly Circular Linked List.\n3.Float Doubly Circular Linked List.\n4.Double Doubly Circular Linked List." << std::endl;
						std::cout << "-------------------------------------------------------------------------------------------------" << std::endl;
						std::cout << "Enter your Choice : " << std::endl;
						std::cin >> choice1;

						if(choice1 == 1) {

						} else if(choice1 == 2) {

						} else if(choice1 == 3) {

						} else if(choice1 == 4) {

						} else {
							
							std::cout << "Wrong Choice" << std::endl;
						}
						
						std::cout << "\nDo You Want to Create any Doubly Circular Linked List" << std::endl;
						std::cin >> ch1;
					} while(ch1 == 'Y' || ch1 == 'y');
				}
				break;
			default :
				std::cout << "Wrong Input" << std::endl;

		}
		std::cout << "Do you want to Create Any Linked List?" << std::endl;
		std::cin >> ch;
	} while(ch == 'Y' || ch == 'y');
	return 0;
}
