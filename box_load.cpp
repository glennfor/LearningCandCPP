//box_load.cpp

//illustrating a simple progress bar which increases by using random time
//and displays a message when finished
//can also decide at times to terminate the progress of the bar and give an error message why it did so

//error messages are dispayed in red
//warning messages are displayed in yellow
//success messages are displayed in green

//might add some numbers to be changing by the side as if it was a real download


//exammples of warning
//----file is too large size of file is determined randomly in a realistic range and time taken is
//decided based n the file size and download speed which will be showing in a bar beside

//bar  |download speed |size downloade/size left| file size



#include <iostream>
#include <conio.h>//for the getch() function only needed in C++ files
#include "MACROS.h"
#include <cstdlib>
#include <ctime>
#include <iomanip>//IO formatting AYK

#define SECONDS_TO_WAIT   10

time_t simulate(std::string);//returns time taken to comlete the simulation

main(){
	char side = '\263';//side of the load bar
	std::string tload(44, '\333'),//top load
	bload=tload,//bottom load
	deed[]={"Installed", "Loaded", "Downloaded"},//what could possibly be going on
	action[]={"Installing", "Loading", "Downloading"},
	turns = "-\\|/";
	long arg;
	time(&arg);
	long seed = int(arg);
	srand(seed);
	int choice = rand()%3;
	std::cout<<std::endl<<'\t'<<"Your File is Being "<<deed[choice];//choise is chosen randomly
	seed = 0;
	TEXTCOLOR(FOREGROUND_BLUE|FOREGROUND_GREEN|FOREGROUND_INTENSITY);
	while(seed-arg < SECONDS_TO_WAIT){
		for(int iter = 0; iter < 4; ++iter){//there is an easier way using iterator container
			GOTOXY(20, 3);
			std::cout<<turns[iter];
			Sleep(100);//500 miliseconds
		}
		time(&seed);
	}
	TEXTCOLOR(DEFAULT);
	GOTOXY(20, 3);
	std::cout<<"   ";
	time(&arg);
	GOTOXY(16, 5), std::cout<<"PLEASE, WAIT ";
	TEXTCOLOR(YELLOW);
	while(seed-arg < SECONDS_TO_WAIT){
		for(int iter = 0; iter < 3; ++iter){//there is an easier way using iterator container
			GOTOXY(30+iter*2, 5),std::cout<< char(0371);
			Sleep(500);//defined in "MACRO.h".windows.h
		}
		GOTOXY(29, 5), std::cout<<"\t\t\t\t";
		Sleep(500);
		time(&seed);
	}
	GOTOXY(0, 5);
	TEXTCOLOR(BLUE);//determine the text color i want to use later
	std::cout<<"\t\t\t"<<std::setw(12)<<std::right<<action[choice];
	TEXTCOLOR(DEFAULT);
	std::cout<<" . . .";
	GOTOXY(15, 14-4-2), std::cout<<side;
	GOTOXY(45+15, 14-4-2), std::cout<<side;
	
	GOTOXY(15, 15-4-2), std::cout<<side;
	GOTOXY(45+15, 15-4-2), std::cout<<side;
	
	
	GOTOXY(16, 14-4-2), std::cout<<tload;
	GOTOXY(16, 15-4-2), std::cout<<tload;
	
	time_t t_taken = simulate(tload);
	
	TEXTCOLOR(GREEN);
	GOTOXY(0, 20-4-1), std::cout <<"SUCCESSFUL:\nIt took " <<t_taken <<" seconds to complete the "
	<<action[choice] <<" of your file ";
	TEXTCOLOR(DEFAULT);
	
	TEXTCOLOR(YELLOW);
	GOTOXY(0, 20-4+2), std::cout <<"WARNING:\nFile Size Might Have Been too Large";
	TEXTCOLOR(DEFAULT);

	getch();
}

time_t simulate(std::string tload){
    TEXTCOLOR(SHINYWHITE);
    size_t size;
    time_t start, stop;
    time(&start);
    //use when i learn threading
    //std::string unit;//MB, GB , KB, B or TB
	GOTOXY(16, 17-4-2), std::cout << "FILE SIZE : " << (size = rand()%2000) <<" MB";
	GOTOXY(16, 18-4-1), std::cout << "PROGRESS: ";
	for(int i = 0; i<tload.length(); ++i){
		GOTOXY(16+i, 14-4-2), std::cout<<tload[i];
		GOTOXY(16+i, 15-4-2), std::cout<<tload[i];
		GOTOXY(28, 18-4-1), std::cout << std::setprecision(2) <<std::setw(4) <<std::left
		<< std::fixed << float(i+1)/tload.length() *size <<"MB OF " <<size<<"MB  ( "
		<<float(i+1)/tload.length() *100 <<" %" <<" )";
		WAIT(int(rand()%10)+1);
		GOTOXY(28, 18-4-1), std::cout <<"\n\n";
	}
	TEXTCOLOR(DEFAULT);
	time(&stop);
	return (stop-start);
}
