 #include<stdio.h>
 #include<math.h> //include the header file to use standard input and output functions
 #include<conio.h>
 # include <string.h>
int main(){
	char x, ch[4];
	float a,b; //to show that a and b are floating points
	
	do{
	printf("Operators:(+, -, /, *)\n\
Enter an data in the form: first_number  operator  second_number()\n ");
	scanf("%f %c %f", &a, &x, &b);
	printf("\n");
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
		default:
				printf("Error!!! unknown operator\n");
				//when no case is defined or when there is an error in inputting data
		}
		printf("\nDo you want to go again?(yes or no)\n");
		scanf("%s", ch);
		printf("\n");
	}
	while(strcmp(ch, "yes")==0 || strcmp(ch, "Yes")==0 || strcmp(ch, "YES")==0);
			getch();
	getch();
}
