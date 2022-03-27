#include<stdio.h>
//Get to me if any explanations are needed gn
int main(){
	int num, last, first;
	printf("Entre a number:\n");
	scanf("%d", &num);
	last=num%10;
	while(num/10)num/=10;
	first=num%10;//OR num
	printf("The sum of first and last digit is %d\n\n", last+first);
	getch();
}
