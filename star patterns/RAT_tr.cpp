#include<stdio.h>
#include<conio.h>


using namespace std;
int main(){
	int i, j, k, l, num;
	printf("Enter any number\n");
	cin>>num;
	for(i=1;i<=num;i++){
		for(j=1;j<=num;j++){
		if(i<=j||i==1||j==num)
		printf("* ");
		else printf("  ");}
		printf("\n");
	}
	getch();
}
