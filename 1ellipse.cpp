// Ellipse.cpp
// The program draws an ellipse.
// The points (x,y) on an ellipse with center (0,0)
// and axes A and B satisfy:
// x = A*cos(t), y = B*sint(t) for 0 <= t <= 2*PI .
//------------------------------------------------------
#include "MACROS.h"
#include <iostream>
#include <cmath> // Prototypes of sin() and cos()
#include <conio.h>
#define DOT(x,y) (LOCATE(y,x),cout<< '*')
#define PI 3.1416
#define Mx 40 // The point (Mx, My) is the
#define My 12 // center of the ellipse.
#define A 25 // Length of main axis
#define B 10 // Length of subsidiary axis
main()
{
	using namespace std;
int x, y; // Screen coordinates.
clrscr2();
// 0 <= t <= PI/2 is a 1/4-circle:
for( double t = 0.0 ; t <= PI/2 ; t += 0.03)
{
x = (int) (A * cos(t) + 0.5);
y = (int) (B * sin(t) + 0.5);
DOT( x+Mx, y+My);
DOT( x+Mx,-y+My);
DOT(-x+Mx, y+My);
DOT(-x+Mx,-y+My);
}
LOCATE(24,0);
getch();
return 0;
}
