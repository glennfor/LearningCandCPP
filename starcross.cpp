#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#define AND &&
#define OR ||
int main(){//recheck!!!!
	int n, i, j, k ,l;
	start:
	printf("Enter a numberƃ\n\n");
	scanf("%d", &n);
		for(i=1;i<=n;i++){
			//printf("*");
			for(j=1;j<=n;j++)
			if(i==(n)/2||j==n/2)
			printf(" *");
			else
			printf(" ");
         	printf("\n");
  }
  printf("\n\n");
	system("pause");
	return 0;
}
