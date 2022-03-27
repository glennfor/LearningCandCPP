#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(int argc, char *argv[])
{
	int A, N, i;
	printf("Enter your age:\n");
	scanf("%d", &A);
	printf("Enter the number\n");
	scanf("%d", &N);
	if(A<=6){
		for(i=1;i<=10;i++)
		{
			printf("%d+%d=%d\n", i,N, i+N);
		}
	}
	else{
		for(i=1;i<=10;i++)
		printf("%d*%d=%d\n", i,N, i*N);
	}
 system("pause");
	return 0;
}
