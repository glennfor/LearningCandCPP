#include <stdio.h>
#include <conio.h>
#include <math.h>
int hcf(int , int);
int a, b;
main(){
	printf("--PROGRAM TO GET GCD(HCF) OF TWO INTEGERS--\n\n");
	printf("Enter two positive integers to get their gcd:\n");// modify to accommodate negatives
	scanf("%d%d", &a, &b);
	printf("\n\ngcd(%d, %d)=%d\n\n", a, b, hcf(a, b));
	getch();
}
int hcf(int a, int b){
	if(b!=0)
	return fabs(hcf(b, (a%b)));
	else
	return a;// was return 1; just to check
}
