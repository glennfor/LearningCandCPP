#include <iostream>
#include <conio.h>
#include <string>
#include <sstream>
#define WAIT(a) for(int p=0; p<=100000000l; ++p)
main(){
	using namespace std;
	int i, n;
	string buff;
	cout<<"PROGRAM TO PERFORM A COUNTDOWN\n\n";
	cout<<"Enter number of seconds countdown should take:\n";
	getline(cin, buff);
	stringstream(buff)>>n;
	//gotoxy(18, 25);
	cout<<"T-";
	for(i=n; i>-1; --i){
		//gotoxy(20, 15);
		WAIT(1);cout<<i<<" ";;
	}
//	gotoxy(18, 25);
	cout<<"FIRE"<<"\a\a\a\a\a";
	getch();
}
