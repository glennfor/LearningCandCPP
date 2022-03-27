/*
Exercise 1-8. Write a program to count blanks, tabs, and newlines.
Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or
more blanks by a single blank.
Exercise 1-10. Write a program to copy its input to its output, replacing each tab by \t, each
backspace by \b, and each backslash by \\. This makes tabs and backspaces visible in an
unambiguous way.
Exercise 1-12. Write a program that prints its input one word per line
Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is
easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging
Exercise 1-14. Write a program to print a histogram of the frequencies of different characters
in its input.
Exercise 1-16. Revise the main routine of the longest-line program so it will correctly print
 the length of arbitrary long input lines, and as much as possible of the text.
Exercise 1-17. Write a program to print all input lines that are longer than 80 characters.
Exercise 1-18. Write a program to remove trailing blanks and tabs from each line of input, and
to delete entirely blank lines.
Exercise 1-19. Write a function reverse(s) that reverses the character string s. Use it to
write a program that reverses its input a line at a time.
Exercise 1-20. Write a program detab that replaces tabs in the input with the proper number
of blanks to space to the next tab stop. Assume a fixed set of tab stops, say every n columns.
Should n be a variable or a symbolic parameter?
Exercise 1-21. Write a program entab that replaces strings of blanks by the minimum number
of tabs and blanks to achieve the same spacing. Use the same tab stops as for detab. When
either a tab or a single blank would suffice to reach a tab stop, which should be given
preference?
Exercise 1-22. Write a program to "fold" long input lines into two or more shorter lines
after the last non-blank character that occurs before the n-th column of input. Make sure your
program does something intelligent with very long lines, and if there are no blanks or tabs
before the specified column.
Exercise 1-23. Write a program to remove all comments from a C program. Don't forget to
handle quoted strings and character constants properly. C comments don't nest.
Exercise 1-24. Write a program to check a C program for rudimentary syntax errors like
unmatched parentheses, brackets and braces. Don't forget about quotes, both single and
double, escape sequences, and comments. (This program is hard if you do it in full
Exercise 2-3. Write a function htoi(s), which converts a string of hexadecimal digits
(including an optional 0x or 0X) into its equivalent integer value. The allowable digits are 0
through 9, a through f, and A through F.

exer:"WRITE A PROGRAM TO REMOVE A PARTICULAR CHARATECTER FROM A STRING";

Exercise 2-4. Write an alternative version of squeeze(s1,s2) that deletes each character in
s1 that matches any character in the string s2.
45
Exercise 2-5. Write the function any(s1,s2), which returns the first location in a string s1
where any character from the string s2 occurs, or -1 if s1 contains no characters from s2.
(The standard library function strpbrk does the same job but returns a pointer to the
location.)

Exercise 2-6. Write a function setbits(x,p,n,y) that returns x with the n bits that begin at
position p set to the rightmost n bits of y, leaving the other bits unchanged.
Exercise 2-7. Write a function invert(x,p,n) that returns x with the n bits that begin at
position p inverted (i.e., 1 changed into 0 and vice versa), leaving the others unchanged.
Exercise 2-8. Write a function rightrot(x,n) that returns the value of the integer x rotated
to the right by n positions.

Exercise 2-10. Rewrite the function lower, which converts upper case letters to lower case,
with a conditional expression instead of if-else.

Exercise 3-2. Write a function escape(s,t) that converts characters like newline and tab into
visible escape sequences like \n and \t as it copies the string t to s. Use a switch. Write a
function for the other direction as well, converting escape sequences into the real characters

Exercise 3-3. Write a function expand(s1,s2) that expands shorthand notations like a-z in
the string s1 into the equivalent complete list abc...xyz in s2. Allow for letters of either
case and digits, and be prepared to handle cases like a-b-c and a-z0-9 and -a-z. Arrange that a
leading or trailing - is taken literally

Exercise 3-5. Write the function itob(n,s,b) that converts the integer n into a base b
character representation in the string s. In particular, itob(n,s,16) formats s as a
hexadecimal integer in s.

Exercise 3-6. Write a version of itoa that accepts three arguments instead of two. The third
argument is a minimum field width; the converted number must be padded with blanks on the
left if necessary to make it wide enough.

Exercise 4-1. Write the function strindex(s,t) which returns the position of the rightmost
occurrence of t in s, or -1 if there is none.

Exercise 4-13. Write a recursive version of the function reverse(s), which reverses the
string s in place

Exercise 5-3. Write a pointer version of the function strcat that we showed in Chapter 2:
strcat(s,t) copies the string t to the end of s.
Exercise 5-4. Write the function strend(s,t), which returns 1 if the string t occurs at the
end of the string s, and zero otherwise.
Exercise 5-5. Write versions of the library functions strncpy, strncat, and strncmp, which
operate on at most the first n characters of their argument strings. For example,
strncpy(s,t,n) copies at most n characters of t to s. Full descriptions are in Appendix B.
Exercise 5-6. Rewrite appropriate programs from earlier chapters and exercises with pointers
instead of array indexing. Good possibilities include getline (Chapters 1 and 4), atoi, itoa,
and their variants (Chapters 2, 3, and 4), reverse (Chapter 3), and strindex and getop

Exercise 5-13. Write the program tail, which prints the last n lines of its input. By default,
 n is set to 10, let us say, but it can be changed by an optional argument so that
tail -n prints the last n lines. The program should behave rationally no matter how
unreasonable the input or the value of n. Write the program so it makes the best use of
available storage; lines should be stored as in the sorting program of Section 5.6, not in
 a two-dimensional array of fixed size.

Exercise 6-2. Write a program that reads a C program and prints in alphabetical order each
group of variable names that are identical in the first 6 characters, but different somewhere
thereafter. Don't count words within strings and comments. Make 6 a parameter that can be set
from the command line.
Exercise 6-3. Write a cross-referencer that prints a list of all words in a document, and for
each word, a list of the line numbers on which it occurs. Remove noise words like ''the,''
''and,'' and so on.
Exercise 6-4. Write a program that prints the distinct words in its input sorted into
decreasing order of frequency of occurrence. Precede each word by its count.
*/


//convert a string rep of a dec to another base(bases are from 2 to 26+10)
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
void stripchar(char s[]);
void addchar(char s[], char c){//assumming that s is large enough
	int i = 0;
	while(s[i++] != '\0')
		;
	s[i-1] = c;
	s[i] = '\0';
}

char rev(char s[]){
	char temp;
	int i = 0, len =strlen(s)-1, j;
	j=len;
	while(i < j){
		temp = s[i];
		s[i++] =s[j];
		s[j--] = temp;
	}
}

int main(){
	char s[] = "implement", ss[30] = "super";
	while(strlen(s)){
		printf("--%s--%s\n", s, ss);
		addchar(ss, s[0]);
		stripchar(s);
		getch();
	}
	int* po, i=0;
	int si[]={2, 4, 0, 0, 4, 4	};
	po=si;
	char see[]="_CLANG_";
	for (; i < 6; ++i){
		printf("%d\t%c\n", po[i], see[i]);
	}
	rev(see);
	puts(see);
	for (i = 0; i < 6; ++i){
		printf("%d\t",si[i]);
	}
	getchar();
}
void stripchar(char s[]){
	int i = 0, len = 0;
	while(s[len++] != '\0');
	while(i <len)
		s[i] = s[++i];
	s[i] = '\0';
}
