//colortest//
/*case 3: self-defined nb: range(1-256)  for foreground colors(1-15) for background colors(16-255)
#define BLACK  0
#define DEEPBLUE  1
#define BLUE DEEPBLUE
#define DARKGREEN  2
#define SKYBLUE 3
#define AQUA SKYBLUE
#define DARKRED  4
#define PURPLE  5
#define OLIVE  6
#define WHITE  7
#define DEFAULT WHITE
#define SILVER 8
#define GRAY  SILVER
#define LIGHTBLUE 9
#define SHINYGREEN  10
#define SHINYSKYBLUE 11
#define LIGHTAQUA SHINYSKYBLUE
#define SHINYRED  12
#define RED SHINYRED
#define SHINYPURPLE  13
#define VIOLET  SHINYPURPLE
#define SHINYYELLOW   14
#define YELLOW  SHINYYELLOW
#define SHINYWHITE  15
HANDLE hstdout=GetStdHandle(STD_OUTPUT_HANDLE);

/*TO GET A PARTICULAR COLOR say A ON A PARTICULAR BACKGROUND say B
YOU HAVE GET AS
 A+B+(15*B) + 1*/

//TEXTCOLOR
//#define TEXTCOLOR(a)  SetConsoleTextAttribute(hstdout, a)//a is the color
//textcolor with background
//#define  set2(p,q) (p+q+(15*q) + 1)
//#define  BTEXTCOLOR(a,b)  SetConsoleTextAttribute(hstdout, set2(a,b))//color(a) on bg (b)

/*******************************************************************
********************************************************************
*******************CONSOLE BACKGROUNG COLOR*********************************
********************************************************************
********************************************************************/
/*using system color command:
	system("color HH"), hh is a hex value
	puts as follows
	sytem("colour pq"): text with color q and the console background with values as
#define	BLACK  0
#define	BLUE  1
#define	GREEN 2
#define	AQUA 3
#define	RED  4
#define	PURPLE  5
#define	YELLOW  6
#define	WHITE   7
#define	GRAY    8
#define	LIGHTBLUE 9
#define	LIGHTGREEN A
#define	LIGHTAQUA  B
#define	LIGHTRED   C
#define	LIGHTPURPLE D
#define	LIGHTYELLOW E
#define	BRIGHTWHITE F
	*/
	/*check problem here
#define setbg(a) system("COLOR #a7")// set only background color and use number not macro
#define setbg_txt(a,b) system("color #a#b")*/
# include <iostream>
# include<conio.h>
#include <windows.h>
main(){
    int n=5;
	#define rad 0xA;
	std::cout<<5+rad;
    HANDLE hstdout=GetStdHandle(STD_OUTPUT_HANDLE);
    for(int col=0; col<256; ++col)
	SetConsoleTextAttribute(hstdout, col), std::cout<<"COLOR "<<col<<std::endl;
	
	getch();
}
