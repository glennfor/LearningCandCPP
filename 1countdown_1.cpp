#include <iostream>
#include <conio.h>
#include <string>
#include<cstdlib>
#include <sstream>
#include "MACROS.h"

main(){
	using namespace std;
	int i, n;
	string buff;
	/*
	for(int in=0;in<255;++in)
    SetConsoleTextAttribute(hConsole, in), cout<<in<<" HEY THERE\n";//colors*/
	cout<<"PROGRAM TO PERFORM A COUNTDOWN\n\n";
	cout<<"Enter number of seconds countdown should take:\n";
	getline(cin, buff);
	stringstream(buff)>>n;
	clrscr2();
	LOCATE(18, 25);//form y,x
	cout<<"T-";
	for(i=n; i>-1; --i){
		LOCATE(18, 27);
		cout.width(2), cout.setf(ios::left);
		Sleep(1000);cout<<i;
	}
	LOCATE(18, 25);
	cout<<"FIRE"<<"\a\a\a\a\a";
	
	WAIT(10);
}
