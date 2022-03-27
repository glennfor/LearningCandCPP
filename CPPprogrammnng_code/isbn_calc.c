#include<stdio.h>
#include<string.h>

//didn't write this with a lot of consideration
//alot might be hard to get
//get to me in case of any difficuties gn
int calc11(char isbn[]);
int calc13(char isbn[]);
int main(){
	printf("\t\tProgram to calculate check digit of ISBN\n\n");
	printf("Enter 1. For 11 digit ISBN,    2. For 13-dgit ISBN\n\n");
	int choice;
	scanf("%d", &choice);
	char isbn[20];
	printf("Enter the ISBN number :  ");
	fflush(stdin);
	gets(isbn);
	if(choice==1)
	    printf("\tCheck digit=%d\n", calc11(isbn));
	else if(choice==2)
		printf("\tCheck digit=%d\n",calc13(isbn));
	else
		printf("No ISBN conversion for these number of digits\n\n");
	system("pause");
}

int calc11(char isbn[]){
	if(strlen(isbn)!=10){
		perror("Wrong Number of digits");
		return -1;
	}
	int sum=0, i=0;;
	for(;i<strlen(isbn)-1;++i)sum+=(isbn[i]-'0')*(10-i);
	return 11-sum%11;//sometimes sum%11
}

int calc13(char isbn[]){
	if(strlen(isbn)!=13){
		perror("Wrong Number of digits");
		return -2;
	}
	int sum=0, i=0;;
	for(;i<strlen(isbn)-1;++i)sum+=(isbn[i]-'0')*(i%2?3:1);
	return sum%10;//sometimes 10-sum%10
}







