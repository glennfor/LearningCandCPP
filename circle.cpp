

// circle.cpp
// The program draws a circle.
// The points (x,y) on a circle with center (0,0)
// and axes A and B satisfy:
// x = A*cos(t), y = B*sint(t) for 0 <= t <= 2*PI .
//------------------------------------------------------
#include "MACROS.h"
#include <iostream>
#include <cmath> // Prototypes of sin() and cos()
#include <conio.h>
#define DOT(x,y) (LOCATE(y,x),cout<< '*')
#define PI 3.1416
#define Mx 20// The point (Mx, My) is the
#define My 20 // center of the circle
#define r 14 // radius
main()
{
	using namespace std;
short x, y; // Screen coordinates.
clrscr2();
// 0 <= t <= PI/2 is a 1/4-circle:
for( double t = 0.0 ; t <= 2*PI ; t += 0.03)
{
	x=(short)(Mx+r*(cos(t)));
	y=(short)(My+r*(sin(t)));
	DOT(x,y);
}
LOCATE(24,0);
getch();
return 0;
}
