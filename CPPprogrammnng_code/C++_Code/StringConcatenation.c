/*
Summary: Joins two strings
*/

#include <stdio.h>
#include <conio.h>

void str_cat(char [], char[]);

int main()
{
	char a[100], b[100];
	
	printf("Enter the first string\n");
	gets(a);// equiv to getline;
	fflush(stdin);
	printf("Enter the second string\n");
	gets(b);
	
	str_cat(a,b);
	b[5]='\0';
	
	printf("String obtained on concatenation is::%s\n",a);
	getch();
	return 0;
}
void str_cat(char to[] , char other[]){
	int i, j;
	i=j=0;
	while(to[i]!='\0')
		 ++i ;//find end of to
	while(to[i++]=other[j++]!='\0')//concatenate --other-- to end of --to--
			;//do nothing
	to[i]='\0';
}
/*
Input: Enter first string: lol 
Enter second string: :)
*/
