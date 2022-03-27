#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
/*
*PROGRAM TO DISPLAY FIBONNACI SEQUENCE USING FUNCTIONS
*/
int fib(int n);
int main(){
	int n, a, b, c;
	while(true){
	printf("Enter the term number\n");
	if(!scanf("%d", &n)) break;
	if(n>=0){
	a=fib(n);
	printf("The %dth term of the fibonacci series is %d\n\n", n, a);
  }
  else printf("Applicable only to positive integers\n\n");
}
	system("pause");
	return 0;
	}
int fib(int n){
	if(n==0)
	{
		return 0;
	}
	else if(n==1)
	{
		return 1;
	}
	else{
		return (fib(n-2)+fib(n-1));
	}
}
