#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
int main(){
	/*
	For motion, if motion, vectors, well vec, e.t.c: NOTE:
		Anlgle in degrees=(180/Pi)*angle in radians
		
		Angle in radians=(Pi/180)*angle in degrees
		
		Pi==3.141592654
	*/
	
	/*
	THIS VERSION IS HIGHLY INEFFICIENT AND FAULTY
	REWRITE, REWRITE*/
	int Ax, Bx, Ay, By, Az, Bz, sumX, sumY, sumZ, crossX, crossY, crossZ;
	 const double	Pi = 3.141592659;
	 float const e=2.71828182846;
	float Magnitude, unitX, unitY, unitZ, Cross_magnitude, Rd, VPd, Dot_product, w;
	printf("This program does the following;\n-Adds two 3-D vectors\n-Determines the magnitude of the resultant\n-Finds their dot or scalar product\n-Finds their cross or vector product\n-Determines the directions of\n   a)the resultant\n   b)the cross product\n  in the x-y plane(that is, the angle the 2-D vector makes with the horizontal)\n-Determine the unit vector in the direction of the resultant\n");
	printf("\n\n");
	printf("Enter the coefficient of each component of the first vector\n");
	printf("\n");
	scanf("%d%d%d", &Ax, &Ay, &Az);
	printf("Enter the coefficient of each component of the second vector\n");
	printf("\n");
	scanf("%d%d%d", &Bx, &By, &Bz);
	sumX=(Ax+Bx);
	sumY=(Ay+By);
	sumZ=(Az+Bz);
	printf("The resultant of these two vectors is %di + %dj + %dk\n", sumX, sumY, sumZ);
	Magnitude=sqrt((sumX*sumX)+(sumY*sumY)+(sumZ*sumZ));
	printf("\n");
	printf("The magnitude of the resultant is %.2f\n", Magnitude);
	printf("\n");
	Rd=atan(sumY/sumX)*(180/Pi);
	printf("The direction of the resultant in the x-y plane(angle it makes to the horizontal)\nis %.2f degrees\n", Rd);
	printf("\n");
	unitX=sumX/Magnitude;
	unitY=sumY/Magnitude;
	unitZ=sumZ/Magnitude;
	printf("The unit vector in the direction of %di + %dj + %dk is\n%fi + %fj + %fk\n", sumX, sumY, sumZ, unitX, unitY, unitZ);
	printf("\n");
	Dot_product=(Ax*Bx)+(Ay*By)+(Az*Bz);
	printf("The Dot or Scalar product of %di + %dj +%dk and %di + %dj + %dk is %.2f units\n", Ax, Ay, Az, Bx, By, Bz, Dot_product);
	printf("\n");
	crossX=(Ay*Bz)-(By*Az);
	crossY=(Az*Bx)-(Bz*Ax);
	crossZ=(Ax*By)-(Bx*Ay);
	printf("The Cross or Vector Product of %di + %dj + %dk and %di + %dj + %dk is %di + %dj + %dk\n", Ax, Ay, Az, Bx, By, Bz, crossX, crossY, crossZ);
	Cross_magnitude=sqrt((crossX*crossX)+(crossY*crossY)+(crossZ*crossZ));
	printf("\n");
	printf("The magnitude of this Cross product is %f \n", Cross_magnitude);
	VPd=atan(crossY/crossX)*(180/Pi);
	printf("The direction of the Vector Product(angle it makes to the horizontal)\nis %.2f degrees\n", VPd);
	getch();
	return 0;
}
