/*
Summary: Calculates compund interest
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
 main()
{
	float p,t,r;
	float i,compound,a;
	//clrscr(); problem with this fxn

	printf("enter principal:\t");
	scanf("%f",&p);

	printf("enter rate of interest:\t");
	scanf("%f",&r);

	printf("enter time in years:\t");
	scanf("%f",&t);

	if((p<1)||(t<1)||(r<1))
		printf("\ninvalid");
	else
	{
		a=(float)p*(pow(1+r/100.0,t));
		compound=a-p;
		printf("the compound interest is rs:  %.2f units",compound);
	}
	getch();
	return 0;
}

/*
Input: enter principal: 100
enter rate of interest: 10
enter time in years: 1
*/
