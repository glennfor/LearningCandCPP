// filecopy.cpp : Copies files.
// Call: fcopy1 source [ destination ]
// ----------------------------------------------------
#include <iostream>
#include <fstream>
#include <conio.h>
#include <cstdlib>
using namespace std;

inline void openerror( const char *file)
{
	cerr << "Error on opening the file " << file << endl;
	getch();
	exit(1); // Ends program closing
} // all opened files.

void copy( istream& is, ostream& os); // Prototype
int main(int argc, char *argv[]){
	if( argc < 2 || argc > 3){
		cerr << "Call: filecopy source   [ destination ]"<< endl;
		getch();
		return 1; // or: exit(1);
	}
	ifstream infile(argv[1]); // Open 1st file
	if( !infile.is_open())
		openerror( argv[1]);
	if( argc == 2) // Just one sourcefile.
		copy( infile, cout);
	else // Source and destination
	{
		ofstream outfile(argv[2]); // Open 2nd file
		if( !outfile.is_open() )
			openerror( argv[2]);
		copy( infile, outfile);
		outfile.close(); // Unnecessary.
	}
	infile.close(); // Unnecessary.
	return 0;
}

void copy( istream& is, ostream& os) // Copy it to os.
{
	char c;
	while( is.get(c) )
		os.put(c); // or: os << c ;
}
