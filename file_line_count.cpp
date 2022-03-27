//Exercise 16-1: Write a program that reads a file and counts the number of lines in it.

#include <iostream>
#include <conio.h>
#include <fstream>
/**************************************************************
***Receives the file name from the command line**************
*If filename is not supplied data.txt is read by default***
*********************************************************
*/
#include <cstdlib>

main(int argc, char **argv){
	std::ifstream  read;//read only
	if(argc  >= 2)
	read.open(argv[1]);
	else  //only the filename is available
	read.open("data.txt");//open data.txt by default if command line args not supplied
	if(read.fail())
	{
		std::cout<<"Problem Openning File!!";
		getch();
		exit(2);
	}
	int lines=0;
	std::string  readline;
	while(getline(read, readline))
	++lines;
	read.close();
	std::cout<<"There are "<<lines<<"lines of text in "<<(argc>=2? argv[1] : "data.txt");
	getch();
	}
	
