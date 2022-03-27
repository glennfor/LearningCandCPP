//deltoid_curve_plot.cpp
//The program draws a heart-like shape
// and axes A and B satisfy:
#if 0
a) Make a plot of the so-called deltoid curve, which is defined parametrically by the equations
x = 2 cos q + cos 2q, y = 2 sin q - sin 2q,
where 0 = q < 2p. Take a set of values of q between zero and 2p and calculate x
and y for each from the equations above, then plot y as a function of x.

theta = 50 intervals from 0 to 2*pi
x = 2*cos(theta) + cos(2*theta)
y = 2*sin(theta) + sin(2*theta)
#endif

#include "MACROS.h"
#include <iostream>
#include <cmath> // Prototypes of sin() and cos()
#include <conio.h>
#define DOT(x,y) (GOTOXY(x,y),cout<< '*')

#define PI 3.1415926536
#define START 0.0 // Lower limit
#define END (2.0 * PI) // Upper limit
#define PNT 50 // Number of points on the curve
#define STEP ((END-START)/PNT)
#define xA 20 // Row of x-axis
#define yA 15 // Column of y-axis

using std::cout;
using std::endl;
using std::cos;
using std::sin;
main(){
	int row, column;
	clrscr2();
	double theta = START, xval, yval;
	for( int i = 0 ; i < 50; ++i){//50 intervals b/w START and END
        //xval = 2*cos(theta) + cos(2*theta);
		//yval =2*sin(theta) + sin(2*theta);
		row =int(xval*12 + xA);
		column = int(yval*5 + yA);
		DOT(row, column);
		theta += STEP;
	}
	LOCATE(30,1); // Cursor to the last row
	TEXTCOLOR(SHINYRED);
	cout << "WILL CLEAR SCREEN IN 10 SECONDS !!!";
	TEXTCOLOR(DEFAULT);
	WAIT(10);
	clrscr2();
	theta = START;
	for( int i = 0 ; i < 50; ++i){//50 intervals b/w START and END
        xval = 2*cos(theta) + cos(2*theta);
		yval =2*sin(theta) - sin(2*theta);
		row =int(xval*12 + xA);
		column = int(yval*5 + yA);
		DOT(row, column);
		theta += STEP;
	}
	LOCATE(30,1); // Cursor to the last row
	TEXTCOLOR(BLUE);
	cout << "THAT'S THE CURVE WE WERE TALKING ABOUT ANYWAYS!!!";
	TEXTCOLOR(DEFAULT);

	getch();
	return 0;
}
