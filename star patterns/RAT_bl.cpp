#include<stdio.h>
#include<conio.h>

#include<iostream>

using namespace std;
int main(){
	int i, j, k, l, num;
	printf("Enter any number\n");
	cin>>num;
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=i; j++)
		printf("* ");
		printf("\n");
	}
	getch();
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
			if(i>=j)
			printf("* ");
			else printf(" ");
			printf("\n");
		}
		printf("\n\n");
	system("pause");
	return 0;
}
*/
