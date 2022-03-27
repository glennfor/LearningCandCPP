#include<stdio.h>
#include<conio.h>
int main(){
	printf("There are 7 standard units of temperature measurement, namely;\n-Celcius(Centigrade), C\n-Fahrenheit, F\n-Kelvin, K\n-Rankine, R\n-Newton, N\n-Reaumur, Re\n-Romer, RØ\n\n");
	float F, C, K;
	int r;
	printf("Enter\n 1 to convert from Fahrenheit to Celcius\n 2 to convert from Fahrenheit to Kelvin\n 3 to convert from Celcius to Fahrenheit\n 4 to convert from Celcius to Kelvin\n 5 to convert from Kelvin to Fahrenheit\n 6 to convert from Kevin to Celcius\n");
	("(1 2 3 4 5 6)");
	scanf("%d", &r);
	switch(r) {
		case 1:
			printf("Enter the value of temperature in Fahrenheit\n");
			scanf("%f", &F);
			C=(5*(F-32))/9;
			printf("The value of %.2f Fahr in degrees celcius is %.2f\n", F, C);
			break;
		case 2:
            printf("Enter the value of temperature in Fahrenheit\n");
			scanf("%f", &F);
			K=((5*(F-32))/9)+273;
			printf(" %.2f Fahr is equivalent to %.2f Kelvin\n", F, K);
			break;
		case 3:
            printf("Enter the value of temperature in Celcius\n");
			scanf("%f", &C);
			F=((9*(C))/5)+32;
			printf("The value of %.2f celcius in degrees fahrenheit is %.2f\n", C, F);
			break;
		case 4:
            printf("Enter the value of temperature in Celcius\n");
			scanf("%f", &C);
			K=C+273;
			printf("The value of %.2f celcius in kelvin is %.2f\n", C, K);
			break;
		case 5:
            printf("Enter the value of temperature in Kelvin\n");
			scanf("%f", &K);
			F=((9*(K-273))/5)+32;
			printf("The value of %.2f Kelvin in degrees fahrenheit is %.2f\n", K, F);
			break;
		case 6:
            printf("Enter the value of temperature in Kelvin\n");
			scanf("%f", &K);
			C=K-273;
			printf("The value of %.2f Kelvin in degrees celcius is %.2f\n", K, C);
			break;
	default:
		printf("ERROR!!!\n\n  Recheck Your Entries\n");
}
getch();
return 0;
}
