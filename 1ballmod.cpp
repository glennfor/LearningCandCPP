
//note: here length() is the method
//name is and object; form: object.method// name.length()
#include <iostream>
#include <string>
#include <conio.h>
 // For kbhit() and getch()
#define ESC 27
#include "MACROS.h"
 // ESC terminates the program
unsigned long delay = 5000000L; // Delay for output
using namespace std;
int main()
   {
	system("COLOR 3F");//aqua background
	short x = 2, y = 2, dx = 1, speed = 0;
	short end = 0;
	string floor(80,'\304'),//or '-'
	header= "**** BOUNCING BALL SIMULATION****",
	commands= "[Esc] = Terminate \t [+] = Speed up \t [-] = Slow down";
	//BTEXTCOLOR(SHINYWHITE,AQUA);
 	//clrscr2();
	LOCATE(1,25); cout << header;
	LOCATE(24,1); cout << floor;
	LOCATE(25,7); cout << commands;
	BTEXTCOLOR(SHINYRED,AQUA);//BTEXTCOLOR(SHINYWHITE,BLACK); to trace the pattern made
	while( !end) // As long as the flag is not set
	{
		LOCATE(y,x); cout << 'O'; // Show the ball
		for( long wait = 0; wait < delay; ++wait)
		;
		if(x == 1 || x == 79) dx = -dx; // Bounce off a wall?
		if( y == 23 ) // On the floor?
		{
			speed = - speed;
			if( speed == 0 ) speed = -7; // Kick
		}
		speed += 1; // Speed up = 1
		LOCATE(y,x); cout << ' '; // Clear screen
		y += speed; x += dx; // New position
		if( kbhit() != 0 ) // Key pressed?
		{
			switch(getch()) // Yes
			{
				case '+': delay -= delay/5; // Speed up
				break;
				case '-': delay += delay/5; // Slow down
				break;
				case ESC: end = 1; // Terminate
			}
			}
			}
clrscr2();
getch();
return 0;
}
