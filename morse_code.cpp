//Dictionary consisting of morse code of alphabates;numbers and some symbols
#include <map>
#include <string>
#include <iostream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <conio.h>
#include <cctype>
#include <map>
#include <algorithm>
#include "MACROS.h"
#include <exception>


using std::cout;
using std::cerr;
using std::cin;
using std::endl;
using std::string;
using std::toupper;
using std::isspace;

using namespace std;

//std::map<string, string> MORSE_CODE_DICT;


//wanted to use a dictionary but no need
//since the use will be tedious but not effective
//##EFFICIENCY

string decode(string code){
	string codes[] = {
   	".-",	"-...",   "-.-.",  "-..",   ".",   "..-.",	"--.",	"....",	"..",
   	
	".---",	"-.-",	".-..",	"--",	"-.",	"---",	".--.",	"--.-",	".-.",
	
	"...",	"-",	"..-",	"...-",	".--",	"-..-",	"-.--",	"--..",	".----",
	
	"..---",	"...--",	"....-",	".....",	"-....",	"--...",	"---..",
	
	"----.",	"-----",	"--..--",	".-.-.-",	"..--..",	"-..-.",	"-....-",

	"-.--.",	"-.--.-",
	};
	string characters[] = {
        "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N",
		"O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z",
		"1", "2", "3", "4", "5", "6", "7", "8", "9", "0",";", ".", "?", "/", "-",
		"(", ")"
	};
	
	for(int i = 0; i < 43; ++i)
	{
		if(code == codes[i])
		    return characters[i];
	}
	return string("!");//unknowchar
}

string encode(string letter){//or char letter
	string codes[] = {
   	".-",	"-...",   "-.-.",  "-..",   ".",   "..-.",	"--.",	"....",	"..",

	".---",	"-.-",	".-..",	"--",	"-.",	"---",	".--.",	"--.-",	".-.",

	"...",	"-",	"..-",	"...-",	".--",	"-..-",	"-.--",	"--..",	".----",

	"..---",	"...--",	"....-",	".....",	"-....",	"--...",	"---..",

	"----.",	"-----",	"--..--",	".-.-.-",	"..--..",	"-..-.",	"-....-",

	"-.--.",	"-.--.-",
	};
	string characters[] = {
        "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N",
		"O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z",
		"1", "2", "3", "4", "5", "6", "7", "8", "9", "0",";", ".", "?", "/", "-",
		"(", ")"
	};

	for(int i = 0; i < 43; ++i)
	{
		if(letter == characters[i])
		    return codes[i];
	}
	return string("!!!");//unknowchar

}


string decrypt(string cipher){

	string plainText, temporaryHolder;
	string::const_iterator charIterator = cipher.begin();
	int spaceCount  = 0;
	while(charIterator < cipher.end())//check !=
	{
	
        temporaryHolder.erase();
        while(charIterator < cipher.end() and not isspace(*charIterator))//check !=
		{
            temporaryHolder += *charIterator;
            ++charIterator;
		}
		
		if(temporaryHolder != "")
		{
			plainText += decode(temporaryHolder);
			spaceCount += 1;
		}
		else if(spaceCount > 1)
		{
			plainText += " ";
			spaceCount = 0;
		}

		++charIterator;
		
		if(charIterator < cipher.end() and *charIterator == ' ')//check !=
		    ;//plainText += " ";//two space indicate a space in plain string
		    
	}
	
	return plainText;
	
}



string encrypt(string message){
	string cipherText;
	string::const_iterator charIterator = message.begin();
	
	if(charIterator != message.end() and not isspace(*charIterator))
	{
	    cipherText += encode(string(1,toupper(*charIterator)));
	    ++charIterator;
	}

	    
	while(charIterator != message.end())
	{
		if(not isspace(*charIterator))
			cipherText  +=  " " + encode(string(1,toupper(*charIterator)));
		else
		    cipherText += "  ";//two space indicate a real spcae in the plain message
		++charIterator;
	}
	
	return cipherText;
}


main(){
	cout << "Welcome to Morse Code Encrypter | Decrypter\n\n";
	cout << "Enter plain or cipher text and  \\d to decrypt ,\\e to encrypt\n\n"
	     << "For example: HELLO WORLD \\e will encrypt the string HELLO WORLD\n";
	cout << string(60, '-') << "\n\n";
	string text, delim;
	start:
	cout << "[ENTER TEXT] ";
	TEXTCOLOR(LIGHTAQUA);
	getline(cin, text, '\\');
	cin >> delim;
	cout << "\n";
	TEXTCOLOR(SHINYWHITE);
	switch(toupper(delim[0]))
	{
		case 'E':
			cout << "[ENCRYPTED TO]: [" ;
			TEXTCOLOR(13);
			cout << encrypt(text);
			TEXTCOLOR(SHINYWHITE);
			cout << "]";
			break;
	    case 'D':
			cout << "[DECRYPTED TO] :";
			TEXTCOLOR(SHINYGREEN);
			cout << decrypt(text);
			TEXTCOLOR(SHINYWHITE);
			break;
		default:
            TEXTCOLOR(SHINYRED);
			cout << "[ERROR] " << " Format Not RESPECTED ";
	}
	TEXTCOLOR(SHINYWHITE);
	cout << "\n\n";
	goto start;
	getch();
}
