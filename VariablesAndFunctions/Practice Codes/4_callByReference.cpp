#include<iostream>

int* fun() {
    static int arr[100];
	
    for(int i = 0; i < 4; i++) {
	
	    arr[i] = 1 + i;
    }
    return arr;
}
 
int main() {
    
    int* ptr = fun();
    
    for(int i = 0; i < 3; i++) {
	    std::cout << ptr[i] << std::endl;
    }
    return 0;
}
