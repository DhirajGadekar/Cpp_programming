#include<stdio.h>

int* fun() {
    
    static int arr[100];

    for(int i = 0; i < 4; i++) {

            arr[i] = 1 + i;
    }
    return arr;
}

void main() {

    int* ptr = fun();

    for(int i = 0; i < 3; i++) {
            printf("%d\n",ptr[i]);
    }
    
}

