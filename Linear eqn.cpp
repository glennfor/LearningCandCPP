#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<_mingw.h>
//#include<fac.cpp>
int main(){
	int a, b, c, d, e, f, x, y;
	printf("This program solves simultaneous linear equations\n--------------------------------------\n");
	printf("Before starting rearrange your values in the form: ax + by=c\n                         ");
	printf("                          px + qy=r\n\twhere a, b, c, p, q,& r are real constants  and\n\t");
	printf("x & y are the variables\n");
	printf("------------------------------------------------\n");
	printf("Note:\nThe values of the two variables are the coordinates of intersection if the");
	printf(" two\nequations were equations of lines\n\t-----------------------------------------------\n");
	printf("Enter the values of the coefficients of the variables in the first equation and the constant(c)\n");
	scanf("%d%d%d", &a, &b, &c);
	printf("Enter the values of the coefficients of the variables in the second equation\nand the constant(e)\n");
	scanf("%d%d%d", &d, &e, &f);
	if((a*e-b*d)==0)
	printf("\nSolution is a complex number <-> Parrallel lines\n");
	else{
		if(((e*c-b*f)/(a*e-b*d))==0&&(c-a*x)/b==0){
          	x=((e*c-b*f)/(a*e-b*d));
	         y=(c-a*x)/b;
            	printf("\nSolution set :\t(x,y)=(%d,%d)", x, y);
				}
		else{
              printf("\nSolution set :\t(x,y)=(%d/%d,%d/%d)\n"
			  , (e*c-b*f),(a*e-b*d),(a*f-d*c), (a*e-b*d));
		}
	}
	getch();
	return 0;
	
}

