/*Exercsise 1-6. Verify that the expression getchar() != EOF is 0 or 1.
Exercise 1-7. Write a program to print the value of EOF.*/

#include<stdio.h>
#include<conio.h>
#include <QApplication>

main(){
	int c, check;
    check=((c=getchar())!=EOF);
    printf("EOF=%d\ncheck=%d\n",(int)EOF, check);
	getch();
}
