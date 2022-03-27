#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<assert.h>
#include<ctype.h>
#include<locale.h>
#include<setjmp.h>
#include<signal.h>
#include<getopt.h>
#include<time.h>
#include<stdarg.h>
#include<vector>
#include<errno.h>
#include<iostream>
int vyu = 12;
main(){
	//static int var=5;
	//printf("%d ", var--);
	printf("%d ", vyu--);
	if(vyu)
	main();
	getch();
}
