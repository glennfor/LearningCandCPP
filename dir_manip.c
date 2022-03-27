#include<stdio.h>
#include <dirent.h>
#include <string.h>

int is_substring(char sub[], char main[]);
int main(){
	DIR* dir;
	struct dirent* direntry;
	char path[255];
	gets(path);
	dir=opendir(path);//"C:/Users/Admin/Desktop");
	printf("%s", dir==NULL?"oops, not found":"fine and good to go");
	int count=0;
	while(direntry=readdir(dir))
	printf("\n%3d--%d--%s", ++count, direntry->d_ino, direntry->d_name);
	closedir(dir);
	getch();
}
int is_substring(char sub[], char main[]){//exclusively for C
    int i = 0;
	for(; main[i]!='\0'; ++i){
		int j = 0;
        for(; sub[j]!='\0'; ++j){
			if(sub[j]!=main[j+i])
			break;
        }
        if(j==strlen(sub))return 1;
	}
	return 0;
}
