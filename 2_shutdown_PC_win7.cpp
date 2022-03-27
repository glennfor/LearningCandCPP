#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "MACROS.h"
#include <iomanip>
#include <ctime>
#define WAIT_TIME  15
main(){
	TEXTCOLOR(RED);
	time_t start, current;
	char spin[] = "-\\|/";
	std::cout<<"\n\n\n\t\tYOUR COMPUTER IS GOING TO SHUTDOWN IN\n\n\n\n\t\t\t\t";
	TEXTCOLOR(FOREGROUND_BLUE|FOREGROUND_RED|FOREGROUND_INTENSITY);
	std::cout<<"T-";
	TEXTCOLOR(LIGHTAQUA);
	int count = WAIT_TIME;
	while(count > -1 ){
		time(&start);
		current = 0;
		GOTOXY(34, 7);
		std::cout.width(2), std::cout.setf(std::ios::right);
		std::cout<<std::setfill('0')<<count--;
		while(current - start < 1)
		time(&current);//will always be lower than the new start
	}
	
	system("C:\\WINDOWS\\System32\\shutdown /s");
	
	TEXTCOLOR(SHINYRED);
	GOTOXY(28, 7), std::cout<<"SHUTTING DOWN ... ";
	count = 0;
	while(count++ < 7)
		for(int iter = 0; iter < 4; ++iter){
			GOTOXY(46, 7);
			std::cout<<spin[iter];
			for(int __ = 0; __ < 20000000; ++__);
		}
	
	return 0;
}
// /l is log off
// /r restart
// /s shutdown
// /
