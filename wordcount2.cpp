
// The program counts words and white space characters.
// (A word is the maximum sequence of characters
// containing no white space characters.)
//---------------------------------------------------------------
#include <iostream>
#include <string>
#include <cctype> // Macro isspace()
# include <conio.h>
using namespace std;
int main()
{
	string header(" **** Counts words ****\n"),
	prompt("Enter a text and terminate"
	" with a period and return:"),
	line( 60, '-'),
	text; // Empty string
	
	cout << header << endl << prompt << endl
	<< line << endl;
	getline( cin, text, '.'); // Reads a text up to
	// the first '.'
	// Counts words and white space characters
	int i, // Index
	nSpace = 0, // Number of white spaces
	nWord = 0; // Number of words
	bool fSpace = true; // Flag for white space
	for ( i = 0; i < text.length(); ++i){
		if( isspace( text[i]) ) // white space?{
			++nSpace; fSpace = true;
		}
		else if ( fSpace) // At the beginning of a word?{
			++nWord; fSpace = false;
		}
	}
	cout << line // Outputs the result.
	<< "\nYour text contains (without periods)"
	<< "\n characters: " << text.length()
	<< "\n words: " << nWord
	<< "\n white spaces: " << nSpace
	<< endl;
	getch();
	return 0;
}
