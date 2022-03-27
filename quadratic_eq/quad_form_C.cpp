/*
   *NFOR GLEN YINYU
   *Determination of the roots of a  quadratic equation
   *
   *Written in C
 */
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
main ()
{
    printf("\t\x11\x11\x11 CODE TO DETERMINE ROOTS OF A ");
	printf("QUADRATIC EQUATION \x10\x10\x10\n\n");
	printf("--------------------------------------------------------------------------\n");
    printf("FORM: ax^2 + bx + c=0,  with a>0\n");
    start:
        float a,b,c, discriminant,root1,root2;
		float realpart,imaginarypart;// for complex solutions
        printf("\nEnter the coefficients a,b,and c:\n");
        scanf("%f%f%f",&a,&b,&c);
        discriminant=b*b-(4*a*c);
      if (discriminant>0)
	  {
            root1=(-b+sqrt(discriminant))/(2*a);
            root2=(-b-sqrt(discriminant))/(2*a);
            printf("\nRoots of equation\nroot1= %.2f and root2= %.2f",root1,root2);
            printf("\nRoots are Real and Distinct\n");
      }
      else if (discriminant==0)
     {
            root1=root2=-b/(2*a);
            printf("\nRoots of equation\nroot1=%.2f and root2=%.2f",root1, root1);
            printf("\nRoots are Real and Equal(double or repeated)\n");
     }
    else
     {
     realpart=-b/(2*a);
     imaginarypart=sqrt(-discriminant)/(2*a);
     printf("\nRoots of equation\n");
	 printf("root1=%.2f+%.2fi and root2= %.2f%+-.2fi;"
	 ,realpart,imaginarypart,realpart,imaginarypart);
	 printf("\nRoots are Complex and Distinct\n");
    }
printf("----------------------------------------------------------------------------\n");
check:
/*
printf("\nDo you wish to continue\?: (1=YES  0=NO)\n");
int choice;
scanf("%d", &choice);
if(choice==1)
    goto start;
else if(choice==0)
	goto end;
else{
	printf("\n-------------------\nResponse is 1 or 0|\n-------------------\n");
	goto check;
  }*/


printf("\nDo you wish to continue\?:\n");
char choice[4];
scanf("%s",choice);
if(strcmp(choice, "yes")==0 || strcmp(choice, "Yes" )==0|| strcmp(choice, "YES")==0)
    goto start;
else if(strcmp(choice, "no")==0 || strcmp(choice, "No" )==0|| strcmp(choice, "NO")==0)
	goto end;
else{
	printf("\n______________________\nRespond with yes or no|\n______________________\n");
	goto check;
}
getch();
end:
	printf("\n\n");
system("pause");
return 0;
}
