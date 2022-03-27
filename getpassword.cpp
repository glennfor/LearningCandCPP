// Passw1.cpp

#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <conio.h>
#include "MACROS.h"
using namespace std;
long timediff(void); // Prototype
static string secret = "jesus"; // Password
static long maxcount = 3, maxtime = 60; // Limits()

// The functions getPassword() and timediff()
// to read and examine a password.
// -----------------------------------------------------

bool getpassword(void){
	int count=0, time=0;
	string word;
	bool status=false;//
	timediff();//start taking time(start clock)
	while(++count<=maxcount){//while less than 3 attempts
		cout<<"Enter Password(10 characters):"<<endl;
		cin.sync();
		(cin>>setw(20)>>word);
		if(word==secret)
		{
			status=true;//give permisssion
			return status;
		}
		time += timediff();
		if(time>=maxtime)break;
		cout<<"Invalid Password"<<endl<<endl;//when time is not up but password is wrong
		//GOTOXY(0,1), cout<<"\n\n\n\n\n";
		//modify to write on the sanme space
	}
	return status;
}

long timediff(){//returns number of seconds after last call
	static long sec=0;//time of last call
	long oldsec=sec;//stores time of the previous call
	time(&sec);//reads new time
	return (sec-oldsec);//return time difference
}

main(){
	cout<<"Want to get access to information?"<<endl;
	if(getpassword())
	cout<<"Access Granted";
	else cout<<"No authorisation";
	getch();
	return 0;
}
