#include <iostream>
#include <conio.h>
#include <fstream>
#include <cstdlib>

#include <cmath>
double trig(double(*f)(double), double ang ){
	return (*f)(ang);
}

main(){
	double (*f)(double);
	int angle, choice;
	std::cout<<"Enter an angle: "<<std::endl;
	std::cin>>angle;
	std::cout<<"Take the sine(1) , cos(2) ot tan(3) of your angle: ";
	std::cin >>choice;
	switch(choice){
		case 1:f=sin;break;
		case 2: f=cos;break;
		case 3: f=tan;break;
		default: f = cos;
	}
	printf("%g", trig(f, ((angle/180.0)*3.1415)));
	getch();
}

