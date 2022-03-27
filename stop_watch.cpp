#include <iostream>
#include <conio.h>
#include <ctime>
#include <stdio.h>
#include "MACROS.h"
#include <cstdlib>

void put_time();
main(){
	clrscr2();
	//draw boxes
	GOTOXY(20, 5), std::cout << std::string(30, '\334');//top horizontal line
	GOTOXY(20, 9), std::cout << std::string(30, '\337');// bottom horizontal line
	for(int i = 0; i <3; ++i){
		GOTOXY(20, 6+i), std::cout << '\335';
		GOTOXY(20+30-1, 6+i), std::cout << '\336';
	}
	put_time();
	getch();
}

void put_time(){
    time_t seconds;
    while(true){
    time(&seconds);
    TEXTCOLOR(FOREGROUND_BLUE|FOREGROUND_RED|FOREGROUND_INTENSITY);
    std::string time_obj(ctime(&seconds));
    GOTOXY(20+3, 7), std::cout << time_obj;
    TEXTCOLOR(DEFAULT);
    //inorder not to waste CPU cycles , wait for some time
    //before printing the time to console
    Sleep(995);
	}
}
