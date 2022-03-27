#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include "MACROS.h"

main(int argc, char **argv){//or char *argv
	std::fstream fn;//modify later to take care of command line arguments
	fn.open("mydata.txt", std::ios::app|std::ios::in|std::ios::out);
	if(!fn){//fn.fail()
		std::cout<<"Error Openning File\a\a\a";
		WAIT(10);
		exit(0x4);
	}
	int count=0;
 	std::string buffer;
	while(getline(fn, buffer)){
		std::cout<<++count<<"."<<buffer<<std::endl;
	}
	std::cout<<std::endl<<std::endl<<std::setw(35)<<std::right<<"DONE";
	getch();
	fn.close();
	return 0;
}
