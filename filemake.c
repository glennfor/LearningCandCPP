#include <stdio.h>
#include <stdlib.h>

main(){
	FILE *newfile;
	newfile=fopen("writeresult.txt", "w+");
	if(newfile==NULL){
		printf("Error creating file");
		getch();
		exit(5);
	}
	int i=0;
	long seed;
	time(&seed);
	srand(seed);
	for(;i<10; ++i)
	fprintf(newfile, "%d  ", rand());
	printf("WORK DONE\a\a\a");
	getch();
	return 0;
}
