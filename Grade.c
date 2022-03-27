#include<stdio.h>
#include<stdlib.h>

//#include<conio.h>
#include<string.h>
	void grade(int);// grade of students based on the score
main(){
    int *mark;// percentage of the total mark scored
    int num;//number of students
    int i;//counter
	printf("PROGAM TO GRADE STUDENTS BY PERCENTAGE SCORE\n\n");
	printf("Enter the number of students:\n");
	scanf("%d", &num);
	mark=(int*)malloc(num*sizeof(int));
	printf("\n\n");
	printf("Enter student names and their percentage score(to nearest whole number)\n");
	for(i=0; i<num; ++i){
		printf("Enter percentage score of student %d:\n", i+1);
		scanf("%d", &mark[i]);
	}
	printf("STUDENT_NUMBER STUDENT_SCORE STUDENT_GRADE\n");
	for(i=0;i<num;i++){
		printf("%5d\t\t%d\t\t", i+1, mark[i]);grade(mark[i]);printf("\n");
	}
	getch();
}

void grade(a){//can optimise this by reducing the nuber of checks made suince some wre made in the previous sateent
	#define or ||
	#define and &&//and & or already operators in C++
	if(a<0)printf("INVALID");// IF GRADE IS NEGATIVE
	else if(a>=0 and a<=60)printf("F");
	else if(a>60 and a<=70){
		if(a%10==0 or a%10==8 or a%10==9)printf("D+");
		else if(a%10>=1 and a%10<=3)printf("D-");
		else printf("D");
	}
	else if(a>70 and a<=80){
        if(a%10==0 or a%10==8 or a%10==9)printf("C+");
		else if(a%10>=1 and a%10<=3)printf("C-");
		else printf("C");
	}
	else if (a>80 and a<=90){
        if(a%10==0 or a%10==8 or a%10==9)printf("B+");
		else if(a%10>=1 and a%10<=3)printf("B-");
		else printf("B");
	}
	else if(a>90 and a<=100){
        if(a%10==0 or a%10==8 or a%10==9)printf("A+");
		else if(a%10>=1 and a%10<=3)printf("A-");
		else printf("A");
	}
	else if(a>100) printf("OUT_OF_RANGE");
}
