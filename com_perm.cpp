#include<stdio.h>
#include<conio.h>
#include<math.h>
int fact(int a){
	if(a==1||a==0)
	return 1;
	else{
		return a*fact(a-1);
	}}
int perm(int n, int r){
		return fact(n)/fact(n-r);
}
int com(int n, int r){
		return fact(n)/(fact(n-r)*fact(r));
}
int main(){
	int n, r, ans, result, choice;
	start:
	printf("Enter\t1 for combinations\n     \t2 for permutations:\n\n");
	scanf("%d", &choice);
	if(choice==1){
		printf("Enter the values of n and r\t(As in nCr)\n");
		scanf("%d%d", &n, &r);
		 if(n<r||n<0||r<0){
	       	printf("This combination does not exist\n");
       	}
	else{
		ans=com(n, r);
		printf("%dC%d=%d\n", n, r, ans);
		getch();
	}
	}
	else if(choice==2){
        printf("Enter the values of n and r\t(As in nPr)\n");
		scanf("%d%d", &n, &r);
		if(n<r||n<0||r<0){
	     	printf("This permutation does not exist\n");
         	}
     	else{
           	   	ans=perm(n, r);
	         	printf("%dP%d=%d\n", n, r, ans);
        		getch();
			}
      	}
/*	else{
		printf("Invalid values!!!\n\n");
		goto line39;
		getch();
	}*/
	goto start;
	getch();
}
