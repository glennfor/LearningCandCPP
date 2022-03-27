#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main(){
	int n, c, k, *bit;
	printf("Enter an decimal integer\n");
	scanf("%d", &n);
	printf("%d in binary is:\n", n);
	for(c=31;c>=0;c--)
	{
		k=n>>c;
		if(k&1)
		printf("1");
		else
		printf("0");
	}
	getch();
	return 0;
}
