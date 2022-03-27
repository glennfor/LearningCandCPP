
#include<stdio.h>
#include<conio.h>
int func(int m, int n)
{
	if(n==0){
		return m;
	}
	else{
		return func(m-1, n-1);
	}
}
int main(){
	int m, n;
	printf("Enter m and n\n\n");
	scanf("%d%d",&m, &n);
	printf("%d", func(m, n));
	getch();
	return 0;
}
