#include<stdio.h>


//get to me for any explanations

typedef enum{FALSE, TRUE} boolean;

int main(){
	printf("Enter End of Range:\n");
	int n;
	scanf("%d",&n);
	printf("Prime Numbers from 1 to %d:\n\n", n);
	int i,j;
	//NB: 1 is not consideres prime
	boolean is_prime = TRUE;
	for(i=2;i<=n;++i){
		is_prime=1;
		for(j=2;j<=i/2;++j)
			if((i%j)==0){
				is_prime = FALSE;
				break;
			}
		if(is_prime)printf("%d, ", i);
	}
	getch();
}
