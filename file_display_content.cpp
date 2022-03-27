#include <iostream>
#include <fstream>
#include "MACROS.h"
#include <conio.h>

using std::cout;
using std::cin;
using std::endl;
main(){
	std::string filename, read_buffer;
	cout<<"Enter a file name to get its content:\n";
	TEXTCOLOR(FOREGROUND_BLUE|FOREGROUND_INTENSITY);
	cin>>filename;
	TEXTCOLOR(DEFAULT);
	std::ifstream file_obj(filename.c_str());
	if(!file_obj or file_obj.bad()){
        TEXTCOLOR(FOREGROUND_RED|FOREGROUND_INTENSITY);
	    std::cerr<<"File could not be opened:\n"
	    <<"-Check whether it Exists and is Readable\n";
	    TEXTCOLOR(DEFAULT);
	    getch();
	    exit(EXIT_FAILURE);
	}
	TEXTCOLOR(FOREGROUND_BLUE|FOREGROUND_GREEN|FOREGROUND_INTENSITY);
	cout<<"\nDisplaying File Contents of ";
	TEXTCOLOR(FOREGROUND_BLUE|FOREGROUND_INTENSITY);
	cout << filename ;
	TEXTCOLOR(FOREGROUND_BLUE|FOREGROUND_GREEN|FOREGROUND_INTENSITY);
	cout << " . . .\n\n";
	TEXTCOLOR(DEFAULT);
	int line_count = 0;
	while(getline(file_obj, read_buffer)){
		++line_count;
		cout << read_buffer << endl;
	}
	TEXTCOLOR(FOREGROUND_GREEN|FOREGROUND_INTENSITY);
	cout <<endl <<endl <<"SUCCESSFUL: " << line_count << " lines of text have been displayed to the console";
	TEXTCOLOR(DEFAULT);
	getch();
	exit(EXIT_SUCCESS);
}
