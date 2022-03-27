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
		for(i=n;i>=1;i--){
			//printf("*");
			for(j=i;j>=1;j--)
			printf(" *");
			printf(" ");
         	printf("\n");
  }
  printf("\n\n");
	system("pause");
	return 0;
}
