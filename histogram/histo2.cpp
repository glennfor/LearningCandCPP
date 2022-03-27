 # include <cstdio>
 # include <conio.h>
 # include <iostream>
 #include <windows.h>
using namespace std;

/*
  *Want to try memory allocation using new and delete[]
*/
int main(){
    
	printf("** This is a program that gets number of items e.g.employees in to groups**\n\tand produces a ");
	printf("histogram pattern for each group\n\t--------------------------------------------------\n\n");
	int i, j, k, l, *grp, m, tot=0, num;
	printf("Enter number of groups of data:\n");
	scanf("%d", &num);
	grp=new (nothrow) int[num];//c++ MEMORY ALLOCATION
	if(grp==0){
		printf("\n\nERROR\n\tPROBLEM ALLOCATING MEMORY\n\n");
	}
	else{
	printf("\n\n");
	for(m=0;m<num;m++){
		printf("Enter number of items in group %d: ", m+1);
		scanf("%d", &grp[m]);
		printf("%d\n", grp[m]);
	}
	for(i = 0; i < num; i++){
		tot=tot+grp[i];
	}
	printf("Total number of items=%d\n\n", tot);
		printf("        |\n");
	for(j=0; j<num;j++){
		  for(k=1;k<=3;k++){
				if(k==2){
					/*if((j+1)<10)
				      printf(" Group %d|", j+1);
					else printf("Group %d|", j+1);*/
					printf("Group %2d|", j+1);
				}
			else
			  	printf("        |");
				  for(l=0;l<grp[j];l++)
				   printf("#");
				if(k==2)
				printf("(%d)\n", grp[j]);
			else
				printf("\n");
				
		  }
		   printf("        |\n");
		}
	}
	delete[] grp;
	getch();
}
