#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct average{
	float studavrg;
	string studname;
};
struct average *stud;// or simply: average *stud;
int main(void)
{
	int i, max, j, x;
	float swap;
	string swapstr;
	printf("\tThis program takes the averages of students and ranks them\n");
	printf("\n");
	printf("Enter total number of students\n");
	scanf("%d", &max);
	
	stud=new (nothrow)struct average [max];
	
	for(i=0;i<max;i++){
		printf("Enter student %d name\n", (i+1));
        getline(cin, stud[i].studname);         // gets input without considering black spaces as terminators
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
