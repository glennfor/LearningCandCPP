// showfile.cpp
// Reads a text file and outputs it in pages,
// i.e. 20 lines per page.
// Call: showfile filename
// ----------------------------------------------------
#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
int main( int argc, char *argv[]){
	if( argc != 2 ) // File declared?
	{
		cerr << "Use: showfile filename" << endl;
		getch();
		return 1;
	}
	ifstream file( argv[1]); // Create a file stream
		// and open for reading.
	if( !file ) // Get status.
		{
			cerr << "An error occurred when opening the file "
				<< argv[1] << endl;
				getch();
		return 2;
		}
	char line[80];
	int cnt = 0;
	while( file.getline( line, 80)) // Copy the file
	{ // to standard
		cout << line << endl; // output.
		if( ++cnt == 20)
		{
			cnt = 0;
			cout << "\n\t ---- <return> to continue ---- " << endl;
			cin.sync(); cin.get();
		}
	}
	if( !file.eof() ) // End-of-file occurred?
	{
		cerr << "Error reading the file "
		<< argv[1] << endl;
		getch();
		return 3;
	}
	getch();
	return 0;
}
