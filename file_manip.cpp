#include <iostream>
#include <cstdio>
#include <unistd.h>
#include <sys/stat.h>
#include <time.h>
#include <conio.h>
#include "MACROS.h"
using namespace std;
void print_file_properties(struct stat stats);

main(){
	char path[50];
	struct stat stats;
	printf("Enter source file path: \n");
	TEXTCOLOR(LIGHTBLUE);
	scanf("%s", path);
	TEXTCOLOR(DEFAULT);
	//stat() fxn returns 0 on succesful operation and -1 if unable toget file properties
	if(!stat(path, &stats))
        print_file_properties(stats);
	else{
		printf("\nUnable to get file properties\n");
		printf("Check whether \"%s\" exists\n", path);
	}
	getch();
}

//function to pritn the file properties
void print_file_properties(struct stat stats){
	struct tm dt;//a structure in the ime.h header
	//file permissions
	TEXTCOLOR(FOREGROUND_BLUE|FOREGROUND_RED|FOREGROUND_INTENSITY);
	printf("\nFILE ACCESS:\n");
	TEXTCOLOR(DEFAULT);
	if(stats.st_mode & R_OK)
	    printf("Readable\n");
 	if(stats.st_mode & W_OK)
	    printf("Writable\n");
	if(stats.st_mode & X_OK)
	    printf("Executable\n");
	//file size
	printf("\nThe file size is %d (bytes)\n",stats.st_size);
	//get file creation time in secpnds and convert to date and time format
	dt = *(gmtime(&stats.st_ctime));
	printf("Created on : %d-%d-%d %d:%d:%d\n", dt.tm_mday, dt.tm_mon, dt.tm_year+1900,
												dt.tm_hour, dt.tm_min, dt.tm_sec);
	//get file modifiaction time
	dt = *(gmtime(&stats.st_mtime));
	printf("Modified on : %d-%d-%d %d:%d:%d\n", dt.tm_mday, dt.tm_mon, dt.tm_year+1900,
												dt.tm_hour, dt.tm_min, dt.tm_sec);
}
//time could be 'arranged' using functions fom the time.h library
// asctime(struct tm )
