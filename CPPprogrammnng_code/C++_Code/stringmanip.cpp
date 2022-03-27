#include <cstdio>
#include<conio.h>
#include <string.h>
  #include <iostream>
#include <cctype>//prototypes of isalpha(), etc
  using namespace std;
 main(){
		#define TEXT_LIMIT 500
		int vow=0, cons=0, punc=0, space=0, tab=0, nchar=0, digit=0;
		char text[TEXT_LIMIT];
		printf("STRING MANIPULATION\n\n");
		printf("Enter A Statement\n\n");
		gets(text);
		for(int i=0; i<strlen(text); i++)    //for(int i=0; text[i]!='\0'; i++)
		{
			++nchar;
			if(isalpha(text[i])){
				if(text[i]=='a' or text[i]=='e' or text[i]=='i' or text[i]=='o'
				 or text[i]=='u' or text[i]=='A' or text[i]=='E' or text[i]=='I'
				 or text[i]=='O' or text[i]=='U')
				++vow;
				else ++cons;
			}
			//Note: or is not macro-defined because it is an operator in C++
			if(text[i]=='\t')
			{
				++tab;
			}
			if(isspace(text[i])){
				++space;
			}
			
			if(ispunct(text[i]))++punc;//Special characters like !, @, #, $, %, ^, &, *, ), etc
			
			if(isdigit(text[i]))++digit;
		}
		printf("\nSTRING ANALYSIS:\n\n");
		printf("ASPECT\t OCCURRENCES\n");
		cout<<"\nTotal number of charaters: "<<nchar<<endl<<endl;
		printf("Number of vowels:     %d\n", vow);
		cout<<"Number of consonants:   "<<cons<<endl;
		cout<<"Number of tabs:         "<<tab<<endl;
		cout<<"Number of spaces:      "<<space<<endl;
		cout<<"Number of punctuations: "<<punc<<endl;//or number of special characters
		cout<<"Number of digits: "<<digit;
		getch();
 }
