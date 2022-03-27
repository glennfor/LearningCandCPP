/*
Summary: Program swaps two number without using temporary variable
*/

#include <stdio.h>
void main()
{
	int a,b;

	printf("Enter a and b:\n");
	scanf("%d",&a);
	scanf("%d",&b);

	printf("\nBefore Swapping a=%d,b=%d", a,b);
	a=a+b;
	b=a-b;
	a=a-b;

	printf("\nAfter Swapping a=%d,b=%d",a,b);
	getch();
}

/*
Input: Enter a and b
10 20
*/
