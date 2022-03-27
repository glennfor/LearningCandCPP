/*CHECK OUT NOTES ON SCREEN CONTROL (DESKTOP)*/
#ifndef _MACROS_
#define _MACROS_

#include <windows.h>
/*windows.h is a windows specific header for C/C++ with declarations for
windows API and other macros used by windows programs
include win32 API,wincon.h, wingdi.h, ....*/




/* ANSI.SYS screen control #defines follow: */
#define _BOLD "\x1B[1m"
#define _NORMAL "\x1B[0m"
#define _RED "\x1B[31m"
#define _BLACK "\x1B[30m"
#define _GREEN "\x1B[32m"
#define _CLEAR_SCREEN "\x1B[2J"
#define _CLEAR_EOL "\x1B[K"
#define _MOVE_CURSOR "\x1B[%d;%df"


#define UP    '\x48'  //H
#define DOWN  '\x50'//P
#define LEFT  '\x4B'//K
#define RIGHT '\x4D'//M


//further definitions for navigation(ie W-A-S-D)

// * - Uppercase *
//*l - Lowercase *

//extended arrow keys:: WASD


#define UPx    'W' //H
#define DOWNx  'S'//P
#define LEFTx  'A'//K
#define RIGHTx 'D'//M

//extended lowercase:: wasd

#define UPxl    'w' //H
#define DOWNxl  's'//P
#define LEFTxl  'a'//K
#define RIGHTxl 'd'//M

//escape
#define ESC 27

//#define HALF_SECOND (CLOCKS_PER_SEC / 2)//clocks_per_sec in time or process.h





/*******************************************************
********************************************************************
**********SET CURSOR POSITION**************************
********************************************************************
********************************************************/

HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
/*

wincon.h

typedef struct _COORD {
	SHORT X;
	SHORT Y;
} COORD, *PCOORD;*/

//COORD pos={3,6};//CURSOR POSITION//just an example to illustrate
//SetConsoleCursorPosition(hConsole, pos);
#define _LOCATE(z,s)  SetConsoleCursorPosition((HANDLE)hConsole, {s,z})//depreceated
#define _GOTOXY(a,b)  LOCATE(b, a)//depreciated
/*for sreen control sequences*/
//#define LOCATE(z,s) (cout <<"\033["<<(z)<<';'<<(s)<<'H') //form (y,x)

//defining as functions yields no warnings
//overloading functions to also take a COORD
void LOCATE(int z, int s){//form (y, x)
     COORD pos={short(s),short(z)};//COORD defined in windows.h is struct
     SetConsoleCursorPosition((HANDLE)hConsole, pos);
}
void LOCATE(COORD pos){//form (y, x)
     SetConsoleCursorPosition((HANDLE)hConsole, pos);
}

void GOTOXY(int a, int b){//locate(y,x) === gotoxy(x,y)
	LOCATE(b, a);
}

//will become functional when i discover the members of word

//void GOTOXY(COORD pos){//locate(y,x) === gotoxy(x,y)
//	pos._x = pos._x + pos._y;
//	pos._y = pos._x - pos._y;
//	pos._x = pos._x - pos._y;
//	SetConsoleCursorPosition((HANDLE)hConsole, pos);
//}

/*******************************************************************
********************************************************************
*************CLEAR THE SCREEN**************************************
********************************************************************
********************************************************************/
#define clrscr2()  system("CLS")  //depreciated
//risky to use sytem but no choice yet
//clrscr() //defined in <conio.h>
//#define CLS (cout << "\033[2J") //screen control sequence
#define clear_screen()  system("CLS")

/*******************************************************************
********************************************************************
*************TEXT COLOR*********************************************
********************************************************************
********************************************************************/

/*case1: screen control sequences
#define COLOR( f, b) (cout << "\033[1;3"<< (f) \
<<";4"<< (b) <<'m' << flush)
// 1: light foreground
// 3x: foreground x
// 4x: background x
// Color values for the macro COLOR
// To call ex.: COLOR( WHITE,BLUE);
#define BLACK  0
#define RED  1
#define GREEN  2
#define YELLOW  3
#define BLUE  4
#define MAGENTA  5
#define CYAN  6
#define WHITE  7
// ------------------------------------------------------
// Macro INVERS
// Call: INVERS;
// The following output is inverted.
#define INVERS  (cout << "\033[7m")
// ------------------------------------------------------
// Macro NORMAL
// Call: NORMAL;
// Sets the screen attributes on default values.
#define NORMAL  (cout << "\033[0m")
*/

/*case 2: defined in windows.h and using its functions

//SOME MACROS FOR SCREEN COLOR ALREADY DEFINED AS BELOW
/*instead of using numbers some macros are define in windows.h

  FOREGROUND_BLUE
  FOREGROUND_GREEN
  FOREGROUND_RED
  FOREGROUND_INTENSITY

  BACKGROUND_BLUE
  BACKGROUND_GREEN
  BACKGROUND_RED
  BACKGROUND_INTENSITY

  can be combined with | (bitwise inclusive or)

  */
  
  /* windows.h function prototypes
BOOL WINAPI SetConsoleTextAttribute(_In_HANDLE hConsoleOutput, _In_WORD wAttributes);
hConsoleOutput[in];
wAttributes[in];
//could also use this
WORD colors[]=(0x1A, 0x2B, 0x3C, 0x4D, 0x5E, 0x6F, 0xB2, 0xC3, 0xD4, 0xE5, 0xF6);
HANDLE hstdout=GetStdHandle(STD_OUTPUT_HANDLE);
HANDLE hstdin=GetStdHandle(STD_INPUT_HANDLE);

SetConsoleTextAttribute(hstdout, colors[index]);*///just an example
//FlushConsoleInputBuffer(hstdin);//obvious

//case 3: self-defined nb: range(1-256)  for foreground colors(1-15) for background colors(16-255)
#define BLACK  0
#define DEEPBLUE  1
#define BLUE DEEPBLUE
#define GREEN  2
#define SKYBLUE 3
#define AQUA SKYBLUE
#define DARKRED  4
#define PURPLE  5
#define OLIVE  6
#define WHITE  7
#define DEFAULT WHITE
#define NORMAL DEFAULT
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
#define TEXTCOLOR(color)  SetConsoleTextAttribute(hstdout, color)//a is the color
//textcolor with background
#define  set2(p,q) (p+(q<<4))//(p+(16*q))
#define  BTEXTCOLOR(fg,bg)  SetConsoleTextAttribute(hstdout, set2(fg,bg))//color(a) on bg (b)

/*******************************************************************
********************************************************************
*******************CONSOLE BACKGROUNG COLOR*********************************
********************************************************************
********************************************************************/
/*using system color command:
	system("color HH"), hh is a hex value
	puts as follows
	sytem("colour pq"): text with color q and the console background with values as
	BLACK  0
	BLUE  1
	GREEN 2
	AQUA 3
	RED  4
	PURPLE  5
	YELLOW  6
	WHITE   7
	GRAY    8
	LIGHTBLUE 9
	LIGHTGREEN A
	LIGHTAQUA  B
	LIGHTRED   C
	LIGHTPURPLE D
	LIGHTYELLOW E
	BRIGHTWHITE F
	*/
	//check problem here
#define setbg(a) system("COLOR" #a"7")// set only background color and use number not macro
#define setbg_txt(a,b) system("color "#a#b)

/*******************************************************************
********************************************************************
*********************FLUSH-CONSOLE-INPUT-BUFFER*******************************
********************************************************************
********************************************************************/
//---------------->FlushConsoleInputBuffer(hstdin)<--------------------
//used after finishing with work
HANDLE hstdin=GetStdHandle(STD_INPUT_HANDLE);
#define FCIB   FlushConsoleInputBuffer(hstdin)

/*******************************************************************
********************************************************************
*********************WAIT FUNCTION*******************************
********************************************************************
********************************************************************/
//I WILL USE a long iteration to waste time but i might later use the system time if possible
//will use an integr that will not clash later

//depreciated :::: use Sleep
#define __DELAY__     for(long ___m_=0; ___m_ < 150000000l; ++___m_)//1 to 1.5e8
#define WAIT(n)       for(int ___j_=0; ___j_ < n; ++___j_)__DELAY__//1 to 1.5e8


#endif//END THE HEADER


//just note eq. to cout && printf
//WriteConsole(hConsole, "Hello", 5, NULL, NULL); prints 'Hello'
