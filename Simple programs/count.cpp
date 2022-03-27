#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	int count; const int limit=100;
	//printf("Enter first n numbers to display\n");
	//scanf("%d", &limit);
	count=1;
	while(count<=limit){
		printf("%d ", count);
		count++;//or count=count + 1 or count+=1 or ++count
	}
	printf("\n\n");
	//Using for statement
	
	/*for(count=1;count<=limit;count++){
	printf("%d ", count);}
	printf("\n\n");*/
	//Using do while statement
	
	/*count=1;//define count out of block
	do{
		printf("%d ", count);
		++count;
	}
	while(count<=limit);
	printf("\n\n");*/
	system("pause");
	return 0;
}


