/*Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is
easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging
Exercise 1-14. Write a program `to print a histogram of the frequencies of different characters
in its input.
*/

#include<stdio.h>
#include <stdlib.h>//for malloc
#include<conio.h>
#include "MACROS.h"
short maxim(int[], int);
int main(){
	printf("**This is a program that gets number of items e.g.employees in given groups**\n\tand produces a ");
	printf("histogram pattern for each group\n\t--------------------------------------------------\n\n");
	int i, j, k, l, *grp, m, tot=0, num;
	printf("Enter number of groups of data:\n");
	scanf("%d", &num);
	int len=2+(num*4);//floor lenght
	char* floor=(char*)malloc(sizeof(char)*len);//base of histogram
	grp=(int*)malloc(num*sizeof(int));
	printf("\n\n");
	for(i=0;i<num;i++)
		{
		printf("Enter number of items in group %d: ",i+1);
		scanf("%d", &grp[i]);
		printf("%d\n", grp[i]);
		}
		printf("\n");
		for(m=0;m<num;m++)
		tot=tot+grp[m];
		clrscr2();
		printf("Total number of items: %d\n", tot);
		printf("------------------------------\n\n------------------\nHISTOGRAM PATTERN|\n");
		printf("------------------");
	printf("\n\n");
	short height = maxim(grp, num);//get the maximum height
	for(i=0;i<len-1; ++i)
		*(floor+i)='\334';//definin the floor of the histogram
	*(floor+i)='\0';
	short bot=height+8;

	for(int i = 0; i < num; ++i){
		for(int j = 0; j < grp[i]; ++j)
		    for(int k = 0; k < 3; ++k)
		    GOTOXY(i*j+8, j+)
	}
	GOTOXY( 7, bot), puts(floor);
	for
	printf("\nGROUP:     \335\335\335 \335\335\335");
	getch();
}


short maxim(int arr[], int size){
	 int max=arr[0];
	 for(int i=0; i < size ;++i){
			if(arr[i]>max)
            max=arr[i];
	 }
	 return max;
}
