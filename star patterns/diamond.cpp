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
		for(j=1;j<=num-i;j++)
		printf(" ");
		for(j=1;j<=i;j++)
		printf("* ");
	printf("\n");
}
	for(i=1;i<=num;i++){
			for(j=1;j<=num;j++)
			if(i<j)
			printf("* ");
			else printf(" ");
			printf("\n");
		}
getch();
return 1;
}
