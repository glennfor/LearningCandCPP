#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#define AND &&
#define OR ||
int main(){
	start:
    int num, i, j=0, k;
	printf("Enter value of the number\n");
    scanf("%d", &num);
    printf("\nPrime numbers between 1 and %d={", num);
    for(i=2;i<=num;i++){
	int m=0;
		for(j=2;j<=i-1;j++){
			if((i)%j==0)
			{
				m=1;
				break;
			}
		 }
		if(m==0)
		printf("%d, ", (i));
    }
    printf("}\n\n");
    getch();
    goto start;
}
