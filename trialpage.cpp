#include <stdio.h>
#include <conio.h>

#define PI 3.14
main(){
	float radius,height;
	int cn;
	printf("To calculate the volume of \nA sphere enter 1\nA cylinder enter 2\n" );
	scanf("%d", &cn);
	if(cn==1){
		printf("Enter the radius of the sphere:\n");
		scanf("%f", &radius);
		float Vol=(4.0/3)*PI*(radius*radius*radius);
		printf("The volume of tthe sphere is: %f cubic units", Vol);
	}
	else if(cn==2){
        printf("Enter the radius of the sphere:\n");
		scanf("%f", &radius);
		printf("Enter the height of the cylinder:\n");
		scanf("%f", &height);
		float Vol=PI*(radius*radius)*height;
		printf("The volume of tthe sphere is: %f cubic units", Vol);
	}
	else printf("Invalid choice");
	getch();
}

