#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	int count; const int limit=100;
	//printf("Enter first n numbers to display\n");
	//scanf("%d", &limit);
	count=1;
	while(count<=limit){
		printf("%d ", count);
		count=count+2;
	}
	printf("\n\n");
	system("pause");
	return 0;
	}
