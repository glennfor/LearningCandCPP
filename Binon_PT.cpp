#include<stdio.h>
#include<conio.h>
int fact(int a){
	if(a==1||a==0)
	    return 1;
	else
		return a*fact(a-1);
	}
	
int perm(int n, int r){
		return fact(n)/fact(n-r);
}
int com(int n, int r){
		return fact(n)/(fact(n-r)*fact(r));
}

main(){
	int ln;
	printf("Enter number of rows to print:\n");
	scanf("%d", &ln);
	printf("\n----------------------------------------------------------\n");
	for(int i=0;i<ln ; i++){
		for(int j=0;j<i;j++)
		printf("%3d", com(i,j));
		printf("%3d", 1);
		printf("\n");

}
	getch();
}
