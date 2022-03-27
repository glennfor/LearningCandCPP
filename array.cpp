#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct result{
	float marks;
	char name1[20], name2[30];
	int classno;
}student[5];
int main(){
	int i, j, k, num;char subject[20];
	printf("**Program to get marks of students and register against names**\n");
	printf("\t\t------------------------------------\n\n");
	printf("Enter name of subject    (One word)\n");
	scanf("%s", &subject);
	//printf("\nEnter the number of students for mark registration:\n");
	//cin>>num;
	for(i=0;i<5;i++){
		printf("Enter 2 names of student %d\n",(i+1));
		scanf("%s", &student[i].name1);scanf("%s", &student[i].name2);
		printf("Enter marks of student %d:\n", (i+1));
		scanf("%f", &student[i].marks);
	}
	printf("\n--------------------------------------------------\n");
	printf("STUDENT NAME\t\t|\t%s MARKS", strupr(subject));
	for(j=0;j<5;j++){
		printf("\n--------------------------------------------------\n%8s %8s\t\t\t%.2f\n", student[j].name1, student[j].name2, student[j].marks);
	}
	printf("\n--------------------------------------------------\n\n");
	system("pause");
	return 0;
}
