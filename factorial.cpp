#include<stdio.h>
#include<conio.h>
int fact(int a){
	if(a<=1)
	return 1;
	else{
		return a*fact(a-1);
	}
}
int main(){
	int a, ans;
	printf("Enter number to get factorial\n");
	scanf("%d", &a);
	ans=fact(a);
	printf("%d!=%d", a, ans);
	getch();
	return 0;
}
