/*Exercise 2-4. Write an alternative version of squeeze(s1,s2) that deletes each character in
s1 that matches any character in the string s2.
45
Exercise 2-5. Write the function any(s1,s2), which returns the first location in a string s1
where any character from the string s2 occurs, or -1 if s1 contains no characters from s2.
(The standard library function strpbrk does the same job but returns a pointer to the
location.)*/

#include <stdio.h>
#include <conio.h>
#include <string.h>
short strindex(char s[],char t[]);
void escape(char[], char[]);
void squeeze(char[], char[]);
short any(char[], char[]);
main(){//function tests
	char str[40], s1[60], s2[40], str2[40];
	printf("Enter 4 string and enter <return> after each entry:\n");
	gets(str);
	gets(str2);
	gets(s1);
	gets(s2);
	printf("First letter of \"%s\" in \"%s\" at %d(indexing from 0)\n", s2, s1, any(s1, s2));
	printf("After Deleting matching characters \nin \"%s\" with \"%s\":\n", str, str2);
	squeeze(str, str2);
	puts(str);
	char  s[70],
	t[]="\nA  band of \a musicians \nsang at \tWestMinister Abbey\n";
	escape(s, t);
	printf("ORIGINAL STRING:\n");
	puts(t);
	printf("FORMATTED STRING:\n");
	puts(s);
	getch();
}

short any(char st[], char sd[]){
	short i, j, k;
	i=j=k=0;
	while(st[i++]!='\0')
	;//get length of first parameter
	for(;j<i;){
		k=0;
		while(sd[k]!='\0')
			if(st[j]==sd[k])
				return j;
		else ++k;
		++j;
	}
	return -1;
}

void squeeze(char s1[], char s2[]){
	int i=0, j=0, k, n=0;
	int match=0;
	for(; s1[i++]!='\0';);
	char supp[i];
	while(j<=i){
		k=0;
		while(s2[k]!='\0')
			if(s2[k++]==s1[j]){
				match=1;
				break;
			}
			if(!match){
                s1[n++]=s1[j];
                match=0;
			}
		++j;
	}
	s1[n]='\0';
	//strcpy(s1, supp);
}
/*Write a function escape(s,t) that converts characters like newline and tab into
visible escape sequences like \n and \t as it copies the string t to s. Use a switch. Write a
function for the other direction as well, converting escape sequences into the real characters*/

void escape(char s[], char t[]){//assumming s is large enough especially to accomodate extra x-ters
	int i, j;
	i=j=0;
	while(t[i++]!='\0'){
		switch(t[i]){
			case '\t'://tabulator
				s[j++]='\\', s[j++]='t';
				break;
			case '\\'://tabulator
				s[j++]='\\', s[j++]='\\';
				break;
			case '\a'://alert bell cchatacter
				s[j++]='\\', s[j++]='a';
				break;
			case '\n'://newline character
				s[j++]='\\', s[j++]='n';
				break;
			case '\b'://backspace character
				s[j++]='\\', s[j++]='b';
				break;
			case '\f'://formfeed character
				s[j++]='\\', s[j++]='f';
				break;
			case '\r':
				s[j++]='\\', s[j++]='r';
				break;
			case '\v':
				s[j++]='\\', s[j++]='v';
				break;
			default:
				s[j++]=t[i];
		}
	}
}

/*Exercise 4-1. Write the function strindex(s,t) which returns the position of the rightmost
occurrence of t in s, or -1 if there is none.*/

short strindex(char s[],char t[]){//still to check
	int i, j, k;
	i=j=k=0;
	for(;s[i++]!='\0';);
	
	strrev(t);
	while(i>0){
		k=i;
		while(t[j]!='\0')
		
	}
}

/*Exercise 5-3. Write a pointer version of the function strcat that we showed in Chapter 2:
strcat(s,t) copies the string t to the end of s.

Exercise 5-4. Write the function strend(s,t), which returns 1 if the string t occurs at the
end of the string s, and zero otherwise.

Exercise 5-5. Write versions of the library functions strncpy, strncat, and strncmp, which
operate on at most the first n characters of their argument strings. For example,
strncpy(s,t,n) copies at most n characters of t to s. Full descriptions are in Appendix B.

Exercise 5-6. Rewrite appropriate programs from earlier chapters and exercises with pointers
instead of array indexing. Good possibilities include getline (Chapters 1 and 4), atoi, itoa,
and their variants (Chapters 2, 3, and 4), reverse (Chapter 3), and strindex and getop
(Chapter 4).

