#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main(){
	printf("**This is a program that gets number of employees in 5 groups**\n\tand produces a ");
	printf("histogram pattern for each group\n\t--------------------------------------------------\n\n");
	int i, j, k, l, grp[5], m, tot=0;
	for(i=0;i<5;i++)
	{
		printf("Enter number of employees in group %d: ",i+1);
		scanf("%d", &grp[i]);
		printf("%d\n", grp[i]);
		}
		printf("\n");
		for(m=0;m<5;m++)
		tot=tot+grp[m];
		printf("Total number of employees: %d\n", tot);
		printf("------------------------------\n\n------------------\nHISTOGRAM PATTERN|\n");
		printf("------------------");
	printf("\n\n");
	printf("       |\n");
	for(j=0;j<5;j++)
	{
		for(k=1;k<=3;k++){
			if(k==2){
			printf("Group %d|", j+1);}
			else{
			printf("       |");}
			for(l=0;l<(grp[j]);l++){
			printf("#");//or printf(" | , +, =, #, %, $, !, @, ^, &, -, _, ~, ., >, <, ?, /, \,1)
			}
			if(k==2)
			printf("(%d)", grp[j]);
			printf("\n");
			if(k==3)
			printf("       |");
		}
		printf("\n");
	}
	getch();
}
