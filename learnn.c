#include <stdio.h>
main(){

	int num;
	printf("Enter a percentage to get fraction:\n");
	scanf("%d", &num);
	printf("The faction is::-->>");
	switch(num){
		case 25:
			printf("One quater");
			break;
		case 50:
			printf("Half");
			break;
		case 75:
			printf("Three quaters");
			break;
		case 100:
			printf("whole");
		default:
			printf("Did not think of that");
	}
	getch();
}
