/* ARCADE, written 1992 by Peter D. Hipson
* This is a simple arcade game that uses console I/O.
* It should be run under DOS on a PC. It also should
* be compiled with Microsoft C or a compiler that
* supports kbhit() and getch(). In addition, ANSI.SYS
* should be loaded before using this program, and the
* screen size is assumed to be 25 by 80.
*/
#include <stdio.h> // Make includes first part of file
#include <conio.h> // Console I/O functions
#include <string.h> // For string functions
#include <stdlib.h> // Standard include items
#include <process.h> // For exit(), etc.
#include <time.h> // To seed random numbers

#include "MACROS.h"

/* ANSI.SYS screen control #defines follow: */
#define MOVE_CURSOR "\x1B[%d;%df"
#define MAX_HEIGHT 25
#define MAX_WIDTH 80
#define HALF_SECOND (CLOCKS_PER_SEC / 2)

int main( // Define main() and the fact that this
int argc, // program uses the passed parameters
char *argv[],
char *envp[]
);
int main(int argc, char *argv[], char *envp[]){
	char chChar;
	clock_t ClockTime;
	clock_t OldClockTime;
	int i;
	int nHorizontal = 0; /* Randomize for real game */
	int nVertical = 0; /* Randomize for real game */
	int nMoneyHorizontal = 10; /* Randomize for real game */
	int nMoneyVertical = 10; /* Randomize for real game */
	int nPosition;
	OldClockTime = clock() / HALF_SECOND;
	srand((unsigned)time(NULL));
	clear_screen();
	GOTOXY( nMoneyVertical, nMoneyHorizontal);
	printf("$");
	GOTOXY( nVertical, nHorizontal);
	printf("?");
	while(1){
		if (kbhit()){/* A key has been pressed, so process it as necessary */
			chChar = getch();
			if (chChar == (char)0){
				chChar = getch();
				GOTOXY( nVertical, nHorizontal);
				printf(" ");
				switch(chChar){
					case DOWN:
						if (++nVertical > MAX_HEIGHT)
							--nVertical;
					break;
					case UP:
						if (--nVertical < 1)
							++nVertical;
					break;
					case RIGHT:
						if (++nHorizontal > MAX_WIDTH)
							--nHorizontal;
					break;
					case LEFT:
						if (--nHorizontal < 1)
							++nHorizontal;

					break;

					default:
						break;
					}
				GOTOXY( nVertical, nHorizontal);
				if (nMoneyHorizontal == nHorizontal && nMoneyVertical == nVertical){
					printf("\a");
					printf("?");
				}
				else{
					if (chChar == '\x1b'){/* Exit on Esc keypress */
						clear_screen();
						exit(4);
					}
				}
			}
		else
			{/* No key has been pressed. Move the money. */
			ClockTime = clock() / HALF_SECOND;
			if (ClockTime != OldClockTime){
				OldClockTime = ClockTime;
				GOTOXY( nMoneyVertical, nMoneyHorizontal);
				printf(" "); /* Erase the money */
				i = rand();
				switch(i % 4){ /* Allow four states */
					case 0:
						if (++nMoneyVertical > MAX_HEIGHT)
								--nMoneyVertical;
					break;
					case 1:
						if (--nMoneyVertical < 1)
							++nMoneyVertical;
					break;
					case 2:
						if (++nMoneyHorizontal > MAX_WIDTH)
							--nMoneyHorizontal;
					break;
					case 3:
						if (--nMoneyHorizontal < 1)
							++nMoneyHorizontal;
					break;
					default:
					break;
				}
				if (nMoneyHorizontal == nHorizontal && nMoneyVertical == nVertical){
					--nMoneyHorizontal;
					--nMoneyVertical;
				}
				GOTOXY( nMoneyVertical, nMoneyHorizontal);
				printf("$"); /* Display the money */
				GOTOXY( nVertical, nHorizontal);
			}

			}
		}
	}
	return (0);
}

