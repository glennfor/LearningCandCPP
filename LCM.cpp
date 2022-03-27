#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#define AND &&
#define OR ||
int main(){
	int a, b, max, step, lcm;
	begin:
	printf("Enter two integers to get their LCM\n");
	scanf("%d%d", &a, &b);
	if(a>b)
	max=step=a;
	else
	max=step=b;
	while(1){
		if(max%a==0 && max%b==0){
			lcm=max;
			break;
		}
		max+=step;
	}
	printf("\nThe LCM of %d and %d is: %d\n\n", a, b, lcm);
	goto begin;
	system("pause");
	return 0;
}
