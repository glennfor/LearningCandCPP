/*******************************************
**just illustrate a some things
**modify for greater use later   */

#include <stdio.h>
#include <conio.h>
#include <string.h>

#define gotoxy _gotoxy
#define textcolor _textcolor
#define getch _getch

inline void delay(int param ){
	int del=1000000, i;
	del*=param;
	for(i=0; i < del; ++i);
}//use in place of wait macro :::wait macro is too slow

void stripchar(char s[]);
void addchar(char s[], const char c){//assumming that s is large enough
	int i = 0;
	while(s[i++] != '\0')
		;
	s[i++] = c;
	s[i] = '\0';
}
int main(){
	short i, j;//indices and others
	//------------>ALL CHARACTER CODES ARE REPRESENTED AS OCTAL DIGITS<-----------------
	//outer square
	char thor[51] ; memset(thor, '\334', 50);//top horizontal line
	char bhor[51];memset(bhor,'\337',50);// bottom horizontal line
	char rvert[28] ;memset(rvert,'\335', 27);//right vertical line--not really necesaary to be a sring
	char lvert[28] ;memset(lvert, '\336', 27);//left vertical line
	_gotoxy(10,6); printf("%s",thor);
	_gotoxy(10, 34); printf("%s",bhor);
	for(i=0;i<27;++i){
		_gotoxy(10,(i+7)); putchar(rvert[i]);
		_gotoxy(59,(i+7)); putchar(lvert[i]);
	}
	//inner part
	char  thor2[41] ; memset(thor, '\334', 40);//top horizontal line
	char bhor2[41] ;memset(thor, '\337', 40);//bottom horizontal line
	char rvert2[23] ; memset(thor, '\335', 22);//right vertuical line
	char lvert2[23]  ; memset(thor, '\336', 22);//left vfertical line
	_gotoxy(13,9), printf("%s",thor2);
	_gotoxy(13, 32), printf("%s",bhor2);
	for(i=0;i<22;++i){//mean INNER SCREEN WIDTH=39 ie
		_gotoxy(13,(i+3+7)); putchar(rvert2[i]);
		_gotoxy(52,(i+3+7)); putchar(lvert2[i]);
	}
	#define head  "Designed by:JOHNN GLENN P.O"
	#define MBR   "HELLO WORLD OF C and C++"//length=24
	_textcolor(3);//CYAN
	_gotoxy(17,8); printf("%s",head);// write the header at this spot
	//##########################################################
	//====================CREATE MARQUEE TEXT=====================
	//############################################################
	char message[]=MBR//initial string
	,supp[strlen(message)+1];//supplement string to operate circular with message
	//posx(9 to 45), posy(invariant)
	int color=1;//because black is zero(0) so color=0 will not show on the background
	while(1){
		_textcolor(color);
		strcpy(message ,MBR);
		_gotoxy(14, 31), printf("%s", message);// write out first
		for(j=0, i=0; j<37; ++j){
			addchar(supp, message[i]);
        	delay(20);
       		_gotoxy((50-j), 31),  printf("%s", supp);//supplement string is printed frm the rear
			stripchar(message);//erase letters one-by-one from the begginning(position 0)
			if(strlen(message))
			_gotoxy(14, 31);  printf("%s", message);
			_gotoxy(strlen(message)+14, 31); putchar(' ');//PRINT SAPCE TO REPLACE ANY
			                                           // unnecessary stray characters present
		}//end for
		color==15?color=1:++color;//first 15 colors are 'background-less'
		strcpy(supp, "");//erase supplement string to use for next operation
	}//end-while
	_getch();
}

void stripchar(char s[]){
	int i = 0, len = 0;
	while(i < strlen(s))
		s[i] = s[++i];
	s[i] = '\0';
}
