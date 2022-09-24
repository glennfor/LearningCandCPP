 #include<stdio.h>
 #include<math.h> //include the header file to use standard input and output functions
 #include<conio.h>
 #include <stdlib.h>
 #include <time.h>
int main(){
	char x;  
	float a,b; //to show that a and b are floating points
	printf("Enter an operator(+,-,*,/,1): ");
	scanf("%c", &x);
    printf("Enter 2 numbers: \n");
	scanf("%f %f",&a,&b);
	switch(x){
		case '+':
			printf("%.1f+%.1f=%.1f",a,b,a+b);
		break;
		case '*':
			printf("%.1f*%.1f=%.1f",a,b,a*b);
			break;
		case '-':
			printf("%.1f-%.1f=%.1f",a,b,a-b);
			break;
		case '/':
			printf("%.1f/%.1f=%.1f",a,b,a/b);
			break;
		case '1':
			printf("arctan(%.1f/%.1f)=%.2f rads",a,b,atan(a/b));
			break;
			default:
				printf("Error!!!\n");
				//when no case is defined or when there is an error in inputting data
			}
			getch();
	return 0;
}
