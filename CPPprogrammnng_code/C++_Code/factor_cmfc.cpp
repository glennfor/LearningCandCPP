# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
# include <iostream>

using namespace std;
int cmfc(int a, int b){
	int i;
	if(a>b){
        printf("\nCommon factors of %d and %d={", b, a);
		for(i=1;i<=b;i++){
		if(a%i==b%i && a%i==0)
		printf("%d, ", i);}
		printf("}\n\n");
		}
	else{
        printf("\nCommon factors of %d and %d={", a, b);
        for(i=1;i<=a;i++){
		    if(a%i==b%i && a%i==0)
		        printf("%d, ", i);
				}
		printf("}\n\n");
	}
	}
main(){
	int A, check;
	begin:
	printf("Press\n1 to get factors of a number\n2 to get common factors of two numbers\n");
	cin>>A;//scanf("%c", &A);
	switch(A){
	    case 1:{
   	        int num, test, n=0;
	        printf("\nEnter the number(an integer)\n");
	        /*scanf("%d", &num);*/cin>>num;
        	printf("Factors of %d={", num);
	        for(test=1;test<num;test++)//test<num/2 will be okay
	        {
	           if(num%test==0){
                	printf("%d, ", test);
			        n++;
			   }
          }
           printf("%d }\n\n", num);
           printf("%d has %d factors\n\n", num, n+1);
      }
   break;
   
       case 2:{
			int a, b;
	    	printf("\nEnter the two numbers\n");
		    scanf("%d%d", &a, &b);
		    cmfc(a, b);
          }
   break;
   
   default:
	{
   printf("\nERROR: Incorrect Entry\n\n");
   goto begin;
   }
   }
  printf("Do you Want To Continue: Please enter 1 for YES and 0 for NO\n");
  scanf("%d", &check);
  if(check==1)goto begin;
  else if (check==0)goto end;
end:
	printf("\n\n");
   system("pause");
   return 0;
}
