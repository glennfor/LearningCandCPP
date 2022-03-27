#include<stdio.h>
#include<conio.h>
int main(){
	printf("**This is a program that gets number of items e.g.employees in given groups**\n\tand produces a ");
	printf("histogram pattern for each group\n\t--------------------------------------------------\n\n");
	int i, j, k, l, grp[100], m, tot=0, num;
	printf("Enter number of groups of data:\n");
	scanf("%d", &num);
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
		printf("Total number of items: %d\n", tot);
		printf("------------------------------\n\n------------------\nHISTOGRAM PATTERN|\n");
		printf("------------------");
	printf("\n\n");
	printf("         \335\n");
	for(j=0;j<num;j++)
	{
		for(k=1;k<=3;k++){
			if(k==2){
				if((j+1)<10)
			         printf(" Group %d \335", j+1);
		    	else
                     printf("Group %d \335", j+1);
			}
			else{
			printf("         \335");}
			for(l=0;l<(grp[j]);l++){
			printf("\336");//or printf(",\335, | , +, =, #, %, $, !, @, ^, &, -, _, ~, ., >, <, ?, /, \,1)
			}
			if(k==2)
			printf("[%d]", grp[j]);
			printf("\n");
			if(k==3)
			printf("         \335");
		}
		printf("\n");
	}
	getch();
}
