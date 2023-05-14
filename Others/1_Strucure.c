#include<stdio.h>

struct player {
	
	char name[20];
	int jerNo;
};

struct IPL {
	
	struct player obj2;
	int noOfTeams;
};

void main() {
	
	struct IPL obj1;

	printf("Enter the player Name :");
	fgets(obj1.obj2.name,20,stdin);

	printf("Enter the jercy No :");
	scanf("%d",&obj1.obj2.jerNo);

	printf("Enter the No of Teams: ");
	scanf("%d",&obj1.noOfTeams);
	
	puts(obj1.obj2.name);
	printf("%d\n",obj1.obj2.jerNo);
	printf("%d\n",obj1.noOfTeams);

}
