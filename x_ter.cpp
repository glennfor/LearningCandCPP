#include<conio.h>
#include<iostream>
#include<cstring>
char* str_cat(char to[], char from[]){
	int len=strlen(to), len2=strlen(from),i;
	for(i=len;i<(len+len2);++i)
		to[i]=from[i-len];
   return to;
}
main(){
	char s[]="sees", t[12]="sean", o[]="level";
	std::cout<<str_cat(t, o);
	getch();
}


