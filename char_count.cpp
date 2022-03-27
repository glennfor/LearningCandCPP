#include <stdio.h>
#include <conio.h>
/* count characters in input; 1st version */
main()
{
getch();
long nc;
nc = 0;
while (getchar() != EOF)
++nc;
printf("\n\ncharacters: %ld\n", nc);
getch();
}
