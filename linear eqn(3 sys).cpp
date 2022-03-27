#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<_mingw.h>
//#include<fac.cpp>
int main(){
	int a, b, c, p, q, r, i, j, k, A, B, C, Det_M, x, y, z;
	printf("This program solves 3 system simultaneous linear equations\n--------------------------------------\n");
	printf("Before starting rearrange your values in the form: ax + by + cz=A\n                         ");
	printf("                          px + qy + rz=B \n                         ");
	printf("                          ix + jy + kz=C\n\twhere a, b, c, A, p, q, r, B, i, j, k, & C are real constants  and\n\t");
	printf("x, y, & z are the variables\n");
	printf("------------------------------------------------\n");
	printf("Note:\nThe values of the three variables are the coordinates of intersection if the");
	printf(" \nthree equations were equations of lines\n\t-----------------------------------------------\n");
	printf("Enter the values of the coefficients of the variables in the first equation and the constant(A)\n");
	scanf("%d%d%d%d", &a, &b, &c, &A);
	printf("Enter the values of the coefficients of the variables in the second equation\nand the constant(B)\n");
	scanf("%d%d%d%d", &p, &q, &r, &B);
	printf("Enter the values of the coefficients of the variables in the third equation\nand the constant(C)\n");
	scanf("%d%d%d%d", &i, &j, &k, &C);
	Det_M=a*(q*k-j*r)-p*(b*k-j*c)+i*(b*r-q*c);
	if(Det_M==0)
	printf("\nSolution not in set of real numbers <-> Parallel lines\n");
	else{
	x=A*(q*k-j*r)-B*(b*k-j*c)+C*(b*r-q*c);
	y=-A*(p*k-i*r)+B*(a*k-i*c)-C*(a*r-p*c);
	z=A*(p*j-q*i)-B*(a*j-i*b)+C*(a*q-p*b);
		if(x%Det_M==0&&y%Det_M==0&&z%Det_M==0){
	        printf("Solution set:\t(x, y, z)=(%d, %d, %d)", x/Det_M, y/Det_M, z/Det_M);
	    }
	    else
		printf("\nSolution set:\t(x, y, z)=(%d/%d, %d/%d, %d/%d)", x,Det_M, y, Det_M, z, Det_M);
     }
	getch();
	return 0;
	system("pause");
}

