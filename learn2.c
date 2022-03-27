#include <windows.h>
#include<stdio.h>
int WINAPI WinMain(HINSTANCE hInstance,
				   HINSTANCE hPrevInstance,
				   LPSTR lpCmdLine, int nCmdShow){
	printf("The answer is %d\n",MessageBox(NULL, "HELLO, WORLD", "Note", MB_OK));
	getch();
	return 0;
}

