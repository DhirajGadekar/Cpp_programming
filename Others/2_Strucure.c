
#include<stdio.h>

struct OTT {
	
	char mName[20];
	float price;
};

void printStruct(struct OTT *ptr) {
	
	printf("Enter the Movie :\n");
	fgets((*ptr).mName, 20, stdin);

	printf("Enter the Price :\n");
	scanf("%f",&(*ptr).price);

	puts((*ptr).mName);
	printf("%f\n",(*ptr).price);
}

void main() {
	
	struct OTT obj;

	printStruct(&obj);
}
