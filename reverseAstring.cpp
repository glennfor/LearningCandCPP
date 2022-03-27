/*Exercise 1-19. Write a function reverse(s) that reverses the character string s. Use it to
write a program that reverses its input a line at a time.*/
/**********************************************
**author: JOHNN GLENN ***************
*****************************************/
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>
# include <conio.h>

char* reverse( char s[]){
	char t[strlen(s)+1];
	int n=strlen(s), i=0;
	while(s[i]!='\0'){
		t[i++]=s[--n];
	}
	strcpy(s,t);
	return s;
}

main(){
	char str[100];
	printf("Enter a string to reverse:\n");
	gets(str);
	
	printf("\nReversed string is:\n%s", reverse(str));
	getch();
}
