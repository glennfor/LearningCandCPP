/*******************************************
**just illustrate a some things
**modify for greater use later   */

#include<iostream>
#include <conio.h>
#include "MACROS.h"

inline void delay(int param=1){
	int del=1000000;
	del*=param;
	for(int i=0; i < del; ++i);
}//use in place of wait macro :::wait macro is too slow

main(){
	short i, j;//indices and others
	//------------>ALL CHARACTER CODES ARE REPRESENTED AS OCTAL DIGITS<-----------------
	//outer square
	std::string thor(50, '\334')//top horizontal line
	,bhor(50, '\337')// bottom horizontal line
	, rvert(27, '\335')//right vertical line--not really necesaary to be a sring
	,lvert(27, '\336');//left vertical line
	TEXTCOLOR(AQUA);
	GOTOXY(10,6), std::cout<<thor;
	GOTOXY(10, 34), std::cout<<bhor;
	TEXTCOLOR(SHINYWHITE);
	for(i=0;i<27;++i){
		GOTOXY(10,short(i+7)), std::cout<<rvert[i];
		GOTOXY(59,short(i+7)), std::cout<<lvert[i];
	}
	//inner part
	std::string  thor2(40, '\334'),//top horizontal line
	bhor2(40, '\337')//bottom horizontal line
	,rvert2(22, '\335')//right vertuical line
	, lvert2(22, '\336');//left vfertical line
	TEXTCOLOR(SHINYGREEN);
		GOTOXY(13,9), std::cout<<thor2;
	GOTOXY(13, 32), std::cout<<bhor2;
	TEXTCOLOR(SHINYWHITE);
	for(i=0;i<22;++i){//mean INNER SCREEN WIDTH=39 ie
		GOTOXY(13,short(i+3+7)), std::cout<<rvert2[i];
		GOTOXY(52,short(i+3+7)), std::cout<<lvert2[i];
	}
	#define head  "Designed by:JOHNN GLENN P.O"
	#define MBR   "HELLO WORLD OF C and C++"//length=24
	TEXTCOLOR(PURPLE);
	GOTOXY(17,8), std::cout<<head;// write the header at this spot
	//##########################################################
	//====================CREATE MARQUEE TEXT=====================
	//############################################################
	std::string message=MBR//initial string
	,supp;//supplement string to operate circular with message
	//posx(9 to 45), posy(invariant)
	int color=1;//because black is zero(0) so color=0 will not show on the background
	while(true){
		TEXTCOLOR(color);
		message=MBR;
		GOTOXY(14, 31), std::cout<<message;// write out first
		for(j=0, i=0; j<37; ++j){
			supp+=message[i];
        	delay(20);
       		GOTOXY(short(50-j), 31), std::cout<<supp;//supplement string is printed frm the rear
			message.erase(0,1);//erase letters one-by-one from the begginning(position 0)
			if(message.length())
				GOTOXY(14, 31), std::cout<<message;
			GOTOXY(short(message.length()+14), 31), std::cout<<' ';//PRINT SAPCE TO REPLACE ANY
			                                           // unnecessary stray characters present
		}//end for
		color==15?color=1:++color;//first 15 colors are 'background-less'
		supp.erase();//erase supplement string to use for next operation
	}//end-while
	getch();
}
