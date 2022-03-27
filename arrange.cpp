#include <stdio.h>
#include <string.h>
#include <conio.h>

#define out(expression) printf("%s", expression)
#define in(number)  scanf("%d", &number)

#ifndef ARRAY_SIZE
#define ARRAY_SIZE 100
#endif

typedef int INTEGER;
typedef char BYTE;

int main(){
	INTEGER n, i, j, k, array[1000];
	BYTE ch[4];
	printf("Enter number of values\n");
	scanf("%d", &n);
	printf("Enter the values\n\n");
	for(i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	printf("Arranged values\n\n");
 de:
	for(j=0;j<n-1;j++){
		if(array[j]>array[j + 1]){
		array[j+1]+=array[j];
		array[j]=array[j+1]-array[j];
		array[j+1]-=array[j];
  goto de;
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",array[i]);
	}
	char hurry[12]="\n\nHURRAY";
	out(hurry);
	cout<<strlen(hurry);
	getch();
}
