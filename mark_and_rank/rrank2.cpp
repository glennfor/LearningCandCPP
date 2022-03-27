#include<stdio.h>
#include<string.h>
#include<conio.h>
struct average{
	float studavrg;
	char studname[200];
} stud[10];
int main(void)
{
	int i, max=10, j, x;
	float swap;
	char swapstr[200];
	printf("\tThis program takes the averages of 10 students and ranks them\n");
	printf("\n");
	for(i=0;i<max;i++){
		printf("Enter student %d name\n", (i+1));
		scanf("%s", &stud[i].studname);
		printf("Enter student %d average\n", (i+1));
		scanf("%f", &stud[i].studavrg);
	}
	printf("\nStudent name\t Student average\n");
	for(j=0;j<max;j++){
		printf("%10s\t %3.2f\n", stud[j].studname, stud[j].studavrg);
		printf("\n");
	}
	printf("In Descesding Order\n \n");
	for(j=0;j<max;j++)
	{
		for(x=j+1;x<max;x++)
		{
			if(stud[j].studavrg<stud[x].studavrg)
			{
				swap=stud[j].studavrg;
				stud[j].studavrg=stud[x].studavrg;
				stud[x].studavrg=swap;
				strcpy(swapstr,stud[j].studname);
				strcpy(stud[j].studname,stud[x].studname);
				strcpy(stud[x].studname,swapstr);
			}
		}
	}
	printf("Position| Student name   Student average\n");
	for(j=0;j<max;j++)
	{
		printf("%6d   %10s \t%3.2f",(j+1),  stud[j].studname, stud[j].studavrg);
		printf("\n");
	}
	getch();
	return 0;
}
