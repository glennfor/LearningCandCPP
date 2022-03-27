/*
Summary: Converts decimal number which is base 10 number system 0-9 to binary which is base 2
 number system 0 and 1.
*/

 #include<stdio.h>
 #include<conio.h>


int main(){
	long int decimalNumber,remainder,quotient;
	int binaryNumber[100],i=1,j;

	printf("Enter any decimal number: \n");
	scanf("%ld",&decimalNumber);

	quotient = decimalNumber;
	while(quotient!=0){
		binaryNumber[i++]= quotient % 2;
		quotient = quotient / 2;
	}

	printf("Equivalent binary value of decimal number %d:\n ",decimalNumber);
	for(j = i -1 ;j> 0;j--)
		printf("%d",binaryNumber[j]);
		
	 getch();
//	return 0;
	getch();
}

/*
Input: Enter any decimal number: 50
*/
