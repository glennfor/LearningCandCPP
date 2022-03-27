#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#define AND &&
#define OR ||
int main(){//recheck!!!!
	int n, i, j, k ,l;
	start:
	printf("Enter an odd numberƃ\n\n");
	scanf("%d", &n);
	if(n%2==0){
		printf("I said Enter an ODD number, DUMMYƃ\n\n");
		goto start;
	}
	else{
		for(i=1;i<=n;i++){
			//printf("*");
			for(j=1;j<=n;j++){
			if(i==n||j==n)
			printf(" *");
			else
			printf(" ");}
		//	printf("* ");
         	printf("\n");
		}
		printf("\n\n");
	}
	system("pause");
	return 0;
}
