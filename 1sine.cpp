
// -----------------------------------------------------
// sinCurve.cpp
// Outputs a sine curve
// -----------------------------------------------------
#include <iostream>
#include <cmath> // Prototypes of sin()
#include <conio.h>

#define PI 3.1415926536
#define START 0.0 // Lower limit
#define END (2.0 * PI) // Upper limit
#define PNT 64 // Number of points on the curve
#define STEP ((END-START)/PNT)
#define xA 14 // Row of x-axis
#define yA 10 // Column of y-axis

#include "MACROS.h"
main(){
	using namespace std;
	int row, column;
	clrscr2();
	LOCATE(2,25);
	cout << "------- The Sine Function -------";
	// --- Draws the coordinate system: ---
	LOCATE(xA,1); // x-axis
	for( column = 1 ; column < 78 ; ++column)
		cout << ((column - yA) % 8 ? '\304' : '\305');
	cout << '\020'; // top
	LOCATE(xA-1, yA+64); cout << "2PI x";
	for( row = 5 ; row < 24 ; ++row) // y-axis
		LOCATE(row, yA); cout << '\305';
	LOCATE( 4, yA); cout << "\036 y=sin(x)"; // top
	LOCATE( xA-8, yA+1); cout << " 1";
	LOCATE( xA+8, yA+1); cout << " -1";
	// --- Displays the sine function: ---
	int begpt = yA,
	endpt = begpt + PNT;
	for( column = begpt ; column <= endpt ; ++column){
		double x = (column-yA) * STEP;
		row = (int)(xA - 8 * sin(x) + 0.5);
		LOCATE( row, column); cout << '*';
	}
	LOCATE(25,1); // Cursor to the last row
	getch();
	return 0;
}
