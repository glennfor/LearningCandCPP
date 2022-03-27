/*********************************************************
***PROGRAM READS AND DISPALYS ITS OWN SOURCE*************
*******************************************************/
#include <stdio.h>
#include <conio.h>
main(){
	FILE* name=fopen("file_c_print_src.c", "r");
	char buff[60];
	while(fgets(buff, 60, name)){
		printf("%s\n", buff);
	}
	getch();
}
