#include <iostream>
#include <cstring>
#include <conio.h>
#include <cstdio>
//modify to work on the string class as well
using namespace std;
bool is_substring(char[], char[]);
bool is_palindrome(char[]);
main(){
	char str[25], main_str[50];
	cout<<"Enter a  string:"<<endl;
	gets(str);
	cout<<"Enter a long string:"<<endl;
	gets(main_str);
	if(is_substring(str, main_str))
		cout<<str<<" is a substring of "<<main_str;
	else
	    cout<<str<<" is NOT a substring of "<<main_str;
	cout<<endl<<endl<<str<< " is " << (is_palindrome(str)?"" : "NOT") << " a palindrome";
	cout<<endl<<endl<<"Checked, Done and Dusted";
	getch();
}

bool is_substring(char sub[], char main[]){
	for(int i = 0; main[i]!='\0'; ++i){
		int j = 0;
        for(; sub[j]!='\0'; ++j){
			if(sub[j]!=main[j+i])
			break;
        }
        if(j==strlen(sub))return true;
	}
	return false;
}

bool is_palindrome(char s[]){
	int len=strlen(s),i=0,  j = len;
	while(i<len/2)
		if(s[i++]!=s[--j]) return false;
	return true;
}


