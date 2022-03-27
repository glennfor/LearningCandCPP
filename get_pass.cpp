//modify be able o do cancellations

#include<stdio.h>
#include <conio.h>
#include <ctype.h>
#include "MACROS.h"
//was originally .c file
//now .cpp for sake of using the MACROS.h header

char* getpass(char*);//

//or modify a char array passed as a parameter to hold the password
//void getpass2(char s[]);

int main(){
	printf("\n\nYour Password : %s ", getpass("Enter your password: "));
	getch();
}

#define AND &&
#define OR  ||
#define NOT !
char* getpass(char *prompt){//no spaces allowed
	printf("%s", prompt);
	char c;
    char* pass;
	int index = 0;
	while(NOT isspace(c = getch())){
		if(isspace(c)){
			ungetch(c);
			return pass;
		}
		if(c == '\b'){
			printf("\b ");
		}
        *(pass+index) = c ;
        index++;
        //replace c with '*' ,etc and comment out next two lines
		// to prevent echoing completely
        putchar(c);
        Sleep(100);
        printf("\b*"); //xf9, f8, fa, o
	}
	fflush(stdin);//clean buffer of remaining characters in the input stream
	return (char*)pass;
}

