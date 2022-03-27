/*
write a program that gets two numbers from the user and an operator(a charracter)
and displays the result of the of performing the operator on the two numbers
as the operands*/

//Get to me if any explanations are needed gn
#include<stdio.h>
#include<math.h>

int main(){
	int num1, num2;
	char oper;
	printf("Enter the first number:  ");
	scanf("%d", &num1);
	printf("Enter an operator(+,-,*, /, %, ^):  ");
	fflush(stdin);
	scanf("%c", &oper);
	printf("Enter the second number:  ");
	scanf("%d", &num2);
	switch(oper){
		case '+':
			printf("%d+%d=%d", num1,num2,num1+num2);
			break;
		case '-':
			printf("%d-%d=%d", num1,num2,num1-num2);
			break;
		case '/':
			printf("%d/%d=%.2f", num1,num2,num2?(float)num1/num2:0);
			break;
		case '*':
		case 'x':
			printf("%dx%d=%d", num1,num2,num1*num2);
			break;
		case '^':
			printf("%d^%d=%.2f", num1,num2,pow((float)num1,(float)num2));
			break;
		case '%':
			printf("%d %% %d=%d", num1,num2,(num1%num2));
			break;

		default:
			printf("No such operator");
	}
	getch();
	return 0;
}
