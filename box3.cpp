/*******************************************
**just illustrate a password box
**password entry will be addded later   */

//Extension of box.cpp to add other features just like box2.cpp

#include<iostream>
#include <conio.h>
#include "MACROS.h"
#include <cstdlib>
#include <iomanip>
#include <ctime>
main(){
	short i, j, k;//indices and others
	//------------>ALL CHARACTER CODES ARE REPRESENTED AS OCTAL DIGITS<-----------------
	//outer square
	std::string thor(50, '\334')//top horizontal line
	,bhor(50, '\337')// bottom horizontal line
	, rvert(27, '\335')//right vertical line
	,lvert(27, '\336');//left vertical line
	GOTOXY(5,7), std::cout<<thor;
	GOTOXY(5, 35), std::cout<<bhor;
	for(i=0;i<27;++i){
		GOTOXY(5,short(i+8)), std::cout<<rvert[i];
		GOTOXY(54,short(i+8)), std::cout<<lvert[i];
	}
	//inner part
	std::string  thor2(40, '\334'),//top horizontal line
	bhor2(40, '\337')//bottom horizontal line
	,rvert2(22, '\335')//right vertuical line
	, lvert2(22, '\336');//left vfertical line
		GOTOXY(10,10), std::cout<<thor2;
	GOTOXY(10, 33), std::cout<<bhor2;
	for(i=0;i<22;++i){
		GOTOXY(10,short(i+3+8)), std::cout<<rvert2[i];
		GOTOXY(49,short(i+3+8)), std::cout<<lvert2[i];
	}
	#define head  "Designed by:JOHNN GLENN P.O"
	#define M   "I WILL KILL IN "
	#define MM " SECONDS"
	std::string ring(10,'\a');
	TEXTCOLOR(OLIVE);
	GOTOXY(12,9), std::cout<<head;// write the header at this spot
	//initialise number of seconds
	long seed;
	time(&seed);//use the system time to perform waiting and to seed random number generators
	srand((unsigned)&seed);
	long comp=seed;
	int count=20+rand()%41;//maximum 60 minimum 20
    TEXTCOLOR(FOREGROUND_RED);
	GOTOXY(20, 21), std::cout<<M;//<<count<<MM;
	GOTOXY(22,25), std::cout<<MM;
	for(int cd=count, it=0; cd>=0; --cd, ++it ){
        std::cout.width(2);
        //std::cout.setf(std::cout.right);
		GOTOXY(25, 23), std::cout/*<<setiosflags(std::ios::right)*/<<std::right<<cd;
		//WAIT(2);
		while(seed!=comp+it)//while time has not increased by 1 second, WAIT
		time(&seed)	;
		GOTOXY(27,23), std::cout<<' '<<' ';
		}
	std::cout<<ring;
	WAIT(1);
	exit(0);
}
