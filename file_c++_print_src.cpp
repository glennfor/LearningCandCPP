/*********************************************************
***PROGRAM READS AND DISPALYS ITS OWN SOURCE*************
*******************************************************/
#include <iostream>
#include <conio.h>
#include <fstream>

main(int argc, char*argv[]){
	std::ifstream name;
	name.open("file_c++_print_src.cpp");//or  ifstream name(argv[0])  in read mode only
	char buff[60];
	std::string bb;
	while(getline(name, bb)){//name.getline(buff, 60-1)
		std::cout<<bb<<std::endl;
	}
	getch();
}
