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
    for(i=2;i<num;i++){
       if(num%i==0){
		  j=1;
		  break;
		}
    }
    if(j==0&&num!=1)// if(!j&&num!=1)
    printf("%d is prime\n\n", num);
    else
    printf("%d is not prime\n\n", num);
    goto start;
	getch();
}
