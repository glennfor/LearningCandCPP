#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    printf("ASCII TABLE OF CHARACTER CODES\n\n");
    printf("   DEC    HEX    OCT    CHARACTER\n  --------------------------------\n");
	for(i=0;i<=256;++i)
	   printf("%4d\t%4X\t%4o\t%3c\n\n",i, i, i, i);
	/* The ASCII character with value \7(decimal), \x7(hex), \07(oct), \b
	*is the bell character which was used in the 1960's as a telephone ring
	*so a beeping sound is heard when the character is invoked(since it is unprintable)
	*/
	getch();
}
