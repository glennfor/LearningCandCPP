/*******************************************
**just illustrate a password box
**password entry will be addded later   */

//Extension of box.cpp to add other features

#include<iostream>
#include <conio.h>
#include "MACROS.h"
#include <cstdlib>

main(){
	short i, j, k;//indices and others
	//------------>ALL CHARACTER CODES ARE REPRESENTED AS OCTAL DIGITS<-----------------
	//outer square
	std::string
	 thor(50, '\334')//top horizontal line
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
	#define MBR   "HELLO WORLD OF C and C++"//length=24
	TEXTCOLOR(AQUA);
	GOTOXY(12,9), std::cout<<head;// write the header at this spot

 	//T.V stand
 	for(k=0; k<4; ++k){
		if(k<2){
            GOTOXY(8, short(35+k+4)), std::cout<<'\336';
		    GOTOXY(51, short(35+k+4)), std::cout<<'\335';
		}
		GOTOXY(5+12, short(35+k)), std::cout<<'\336';
		GOTOXY(5+12+26, short(35+k)), std::cout<<'\335';
 	}
 	std::string underline(42, '\337');
 	GOTOXY(9, short(35+k)), std::cout<<underline;
 	//end of TV stand
 	//moving signal box is not yet operational::might have to wait for graphics
 	
	//------------------------>MOVING SIGNAL BOX<---------------
		//------------------------------>signal box<----------------------
	char trc='\277'//top right corner
	,tlc='\332'//top left corner
	,brc='\331'//bottom right corner
 	,blc='\300';//bottom left corner
 	#define SIGNAL "No Signal"
 	TEXTCOLOR(SHINYYELLOW);
 	std::string sig=SIGNAL,
 	tline(9,'\304'),//top line
 	bline(9, '\304'), //bottom line
 	rline(3, '\263'),//right line
 	lline(3, '\263');//left line
	GOTOXY(11,11), std::cout<<tlc<<tline<<trc;
	GOTOXY(11, 14), std::cout<<blc<<bline<<brc;
	for(k=0; k <2; ++k){
		GOTOXY(11, short(12+k)), std::cout<<lline[k];
		GOTOXY(11+10, short(11+1+k)), std::cout<<rline.at(k);
	}
	//write signal
	#define ct "CAUTION!!!"
	#define unct "           "
	int col=1, rout=1;
	while(1){
	TEXTCOLOR(col);
	LOCATE(13,12), std::cout<<sig;//(y,x)
	col==15?col=1, rout=15:col++;
	TEXTCOLOR(SHINYRED);//for caution only
	GOTOXY(short(14+rout+col), short(15+col)), std::cout<<ct;
	WAIT(1);
	GOTOXY(short(14+rout+col), short(15+col)),std::cout<<unct;
	srand((unsigned)&rout);
	rout=rand()%5+(col&2);
   }
	getch();
}

