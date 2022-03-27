
#include <iostream>
#include <string>
#include <conio.h>
 // For kbhit() and getch()
#define ESC 27
#include "MACROS.h"
 // ESC terminates the program
unsigned long delay = 5000000; // Delay for output
using std::cout;
using std::string;

int main()
   {
	clrscr2();
	system("COLOR 31");//aqua background
	short x = 3, y = 3, dx = 1, speed = 0;
	short end = 0;
	string floor(80,'\304'),//or '-'
	ceiling = floor,
	header= " BOUNCING BALL SIMULATION ",
	commands= "[Esc] = Terminate    [+] = Speed up    [-] = Slow down    [C] = Change color";
	LOCATE(1,25); cout << header;
	LOCATE(25,1); cout << floor;
	LOCATE(26,3); cout << commands;
	LOCATE(25,0), cout<<'\300';//lower left corner
	LOCATE(25,short(floor.length()+1)), cout<<'\331';//lower right corner
	LOCATE(2,short(ceiling.length()+1)),cout<<'\277';//upper right corner
	LOCATE(2,0), cout<<'\332';//upper left corner
	LOCATE(2, 1), cout<<ceiling;
	//sides of field
	  for(int i=3; i<25; ++i){
			GOTOXY(0,short(i)), cout<<'\263';//left
			GOTOXY(short(floor.length()+1),short(i)), cout<<'\263';//right
		  }
 	BTEXTCOLOR(PURPLE,AQUA);
	 //BTEXTCOLOR(SHINYWHITE,BLACK);// to trace the pattern made
	int color=0;//to change ball color
	while( !end) {// As long as the flag is not set
		LOCATE(y,x); cout << 'O'; // Show the ball
		for( long wait = 0; wait < delay; ++wait)
			;
		if(x == 1 || x == 79) dx = -dx; // Bounce off a wall?
		if( y == 24 ){ // On the floor?
			speed = - speed;
			if( speed == 0 ) speed = -7; // Kick
		}
		speed += 1; // Speed up = 1
		LOCATE(y,x); cout << ' '; // Clear screen
		y += speed; x += dx; // New position
		if( kbhit() != 0 ){ // Key pressed?{
			switch(getch()){ // Yes
				case '+': delay -= delay/5; // Speed up
				break;
				case '-': delay += delay/5; // Slow down
				break;
				case ESC: end = 1; // Terminate
				break;
				case 'c'://fall through
				case 'C':
                    BTEXTCOLOR(color,AQUA);//color on aqua
                    color==2 or color==0xA?color+=2://to escape putting the color aqua
                    color==15?color=0:++color;
			}
		}
	}
clrscr2();
getch();
return 0;
}
