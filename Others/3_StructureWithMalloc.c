
#include<stdlib.h>
#include<stdio.h>

struct PlayerInfo {
	
	char pName[20];
	float avg;
	int jerNo;
};

void main() {
	
	struct PlayerInfo *ptr = (struct PlayerInfo *)malloc(sizeof(struct PlayerInfo));
		
	printf("Enter Name :\n");
	fgets(ptr->pName,20,stdin);

	printf("Enter Average :\n");
	scanf("%f",&ptr->avg);

	printf("Enter Jercy No :");
	scanf("%d",&ptr->jerNo);

	puts(ptr->pName);
	printf("%f\n",ptr->avg);
	printf("%d\n",ptr->jerNo);
}
