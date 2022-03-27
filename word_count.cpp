#include <stdio.h>
#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */
/* count lines, words, and characters in input */
# include <conio.h>
main()
{
  int c, nl, nw, nc, state, i=0;
  state = OUT;
     nl = nw = nc = 0;
	 char see[]="  i am     a       \nbig\t\tboy     \no";
    while (see[i]!='\0') {
        ++nc;
        if ( see[i] == '\n')
            ++nl;
        if ( see[i] == ' ' || see[i] == '\n' || see[i] =='\t')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            ++nw;
        }
        ++i;
}
printf("words:%d", nw);
getch();
}
/*was a test will complete later*/
