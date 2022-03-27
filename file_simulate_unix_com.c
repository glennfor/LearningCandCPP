/*program to simulate the UNIX Ccmmands
ls()-->to list all files and sub diectories
grep()-->to search for a pattern in a file
*/

freopen()
fopen()
#include <stdio.h>
#include <dirent.h>
#include <string.h>

void unix_ls(DIR* dir, char dirpath[]);//takes special pointer as input pointer
void unix_grep(char* filename, char* pattern);
main(){
	char dirname[50];
	DIR* p;
	printf("Enter a directory name to list its contents:\n\n");
	scanf("%s", dirname);
	unix_ls(p, dirname);
	printf("\n\n");
    char filename[20], pattern[20];
	printf("Enter a File name and a pattern to search in the file:\n");
	printf("Filename :  ");
	scanf("%s", filename);
	printf("\nPattern :  ");
	scanf("%s", pattern);
	unix_grep(filename, pattern);
	getch();
}

void unix_ls(DIR* dir, char dirpath[]){
	struct dirent *d;
	dir = opendir(dirpath);
	if(dir){
		while(d = readdir(dir))
		    puts(d->d_name);
	}
	else{
		puts("Directory not FOUND. Check whether it exists!!");
		return;
	}
}

void unix_grep(char* filename, char* pattern){
	FILE* fp;
	char buffer[250];
	fp = fopen(filename, "r");
	if(!fp){
		puts("\nFile not FOUND. Check whether it exists!!");
		return;
	}
	printf("\n");
	int lineNum = 0;
	while(!feof(fp)){
		lineNum ++;
		fgets(buffer,1000, fp);
		if(strstr(buffer, pattern))//functions somehow like is_substring that i wote earlier
			printf("Line %3d: %s", lineNum, buffer);
		   //puts(buffer);
	}
	fclose(fp);
}
