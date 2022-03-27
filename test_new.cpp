#include <stdio.h>

#include  <conio.h>

/*read character
while(charater is not end-of-line)
output the character just read
*/


/*Copy input to output; 2nd version*/
main(){
	int c;
	while((c=getchar())!=EOF){
	putchar(c);
	}
	getch();
}
