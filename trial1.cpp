#include <iostream>
#include<conio.h>
#include <windows.h>
#define LOCATE(z,s)  SetConsoleCursorPosition(hConsole, {s,z});
#define WAIT(a)  for(int i=0;i<=a*100000000l; ++i)
main(){
	HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 5);
	for(int j=0; j<15; ++j){
	LOCATE(10,25);
	std::cout<<"HEY, THERE AMIGO\a\a";
	WAIT(2);
	LOCATE(10,25);
	std::cout<<"\t\t\t";
	WAIT(2);
	SetConsoleTextAttribute(hConsole, j+2);
	}
	getch();
}
