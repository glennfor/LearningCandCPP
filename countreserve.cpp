// The program counts C reserved words in a C or C++ program or any other text file
//or user-supplied
// (A word is the maximum sequence of characters
// containing no white space characters.)
//---------------------------------------------------------------
#include <iostream>
#include <string>
#include <cctype> // Macro isspace()
# include <conio.h>

struct key{
	std::string word;
	int number;
};
key keywords[]={
    "auto" ,0 ,"else" ,0 ,"long", 0, "switch" ,0,
"break",0 ,"enum", 0 ,"register" ,0 ,"typedef", 0,
"case", 0 ,"extern" ,0 ,"return", 0 ,"union", 0,
"char", 0, "float", 0, "short", 0 ,"unsigned", 0,
"const" ,0 ,"for" ,0 ,"signed", 0 ,"void", 0,
"continue", 0 ,"goto" ,0 ,"sizeof", 0, "volatile" ,0,
"default" ,0 ,"if", 0 ,"static", 0, "while", 0,
"do", 0 ,"int", 0, "struct", 0 ,"_Packed", 0, "double",0,
};


main(){
	#define KEYNUM  (sizeof (keywords)/ sizeof (key))
	std::string buffer;
	while (int c=getch()){
		ungetch(c);
		std::cin>>buffer;
		for ( int i=0; i < KEYNUM   ; ++i){
			if (buffer==(keywords+i)->word) ++(keywords[i].number);
		}
	}
	for (int j=0; j < KEYNUM; ++j){
		std::cout<<keywords[j].word<<" = "<<keywords[j].number;
		if(j%8)std::cout<<std::endl;
	}
}
