#include<stdio.h>
#include<stdlib.h>

int main(){//recheck!!!!
	int n, i, j, k ,l;
	printf("Enter a number\n\n");
	scanf("%d", &n);
		for(i=1;i<=n;i++){
			for(j=1;j<=n;j++)
			printf("* ");
			printf("\n");
		}
		printf("\n\n");
	system("pause");
	return 0;
}
/*
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#define AND &&
#define OR ||
int main(){
	int n, i, j, k ,l;
	start:
	printf("Enter a number\n\n");
	scanf("%d", &n);
		for(i=1;i<=n;i++){
   for(j=1;j<=n;j++)
			if(i)//or if(j)
			printf("* ");
			else printf(" ");
			printf("\n");
		}
		printf("\n\n");
	system("pause");
	return 0;
}
*/
