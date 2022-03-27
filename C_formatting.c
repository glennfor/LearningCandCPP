#include<stdio.h>
#include<conio.h>
/* PROGRAM TO ILLUSTRATE INPUT/ OUTPUT FORMATTING IN C*/

main(){
    int n=0, m=0;
	char s[]="Hello, world of C", str[20];
	printf("Enter the longest word you know:\n");
	m=scanf("%20s%n",str,&n);//gets input of at most 20 x-ters without counting white spaces
	                //any additional remians in the input buffer
	                //stores number of x-ters read in n
	                //m is set to 1 or to 0
	/*PERFORMING FORMATTING*/
	printf(":%s:\n", s);
	printf(":%-.10s:\n", s);
	printf(":%10s:\n",s);
	printf(":%.10s:\n",s);
	printf(":%-10s:\n",s);
	printf(":%.15s:\n",s);
	printf(":%-20s:\n",s);
	printf(":%15.10s:\n",s);
	printf(":%-15.10s:\n",s);
	printf("%s\n", str);
	printf("\nEnter your own field width of choice\n");
	int fw;
	scanf("%i",&fw);
	printf(":%*s:\n",fw,s);
	printf("%+i\t",fw);//prints fw with sign
	printf("%#x\n", 60);//prints number with base specification octal,0: hex,ox: dec, none
	printf("%04d\t", 12);//padds remaining width space with 0( for numbers only)
	printf("%.2i", 1234);
	printf("\n%d  %d", n,m);
	/******************************************************************
	**
	**this is the function used to clear the input buffer in C**
	**
	*******************************************************************/
	fflush(stdin);
	/*END
	**                              ***/
	getch();
}














/*
--d,i int; decimal number
--o int; unsigned octal number (without a leading zero)
--x,X int; unsigned hexadecimal number (without a leading 0x or 0X), using abcdef or
ABCDEF for 10, ...,15.
--u int; unsigned decimal number
--c int; single character
--s char *; print characters from the string until a '\0' or the number of characters
given by the precision.
--f double; [-]m.dddddd, where the number of d's is given by the precision (default
--e,E double; [-]m.dddddde+/-xx or [-]m.ddddddE+/-xx, where the number of d's
is given by the precision (default 6).
--g,G double; use %e or %E if the exponent is less than -4 or greater than or equal to the
precision; otherwise use %f. Trailing zeros and a trailing decimal point are notprinted.
--p void *; pointer (implementation-dependent representation).
--% no argument is converted; print a %

A width or precision may be specified as *, in which case the value is computed by converting
the next argument (which must be an int). For example, to print at most max characters from
a string s,
*/
