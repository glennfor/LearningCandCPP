#include <stdio.h>
#include <sys/stat.h>
main(){
	int fd;
	char path[20];
	struct stat *nfile;
	nfile = (struct stat*)malloc(sizeof(struct stat));
	printf("Enter the file name:\n");
	scanf("%s", path);
	stat(path, nfile);
	printf("\n\nProgram Inodeno: %d\n", nfile->st_ino);
	printf("Last Access Time :%s\n", ctime(&nfile->st_atime));
	printf("Program size : %d bytes\n", nfile->st_size);//was st_blksize
	printf("Last Modification Time : %s\n", ctime(&nfile->st_mtime));
	printf("Protection : %d\n", nfile->st_mode);
	printf("User ID : %d\n", nfile->st_uid);
	printf("Group ID : %d\n", nfile->st_gid);
	printf("Device Driver Number : %d\n", nfile->st_dev);
	printf("Number of Links : %d \n", nfile->st_nlink);
	getch();
}
