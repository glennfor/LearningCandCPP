// reading a complete binary file
#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
	ifstream::pos_type size;// ie int size
	char * memblock;
int main () {
	ifstream file ("example3.bin",ios::in|ios::binary|ios::ate);
	if (file.is_open())
	{
		size = file.tellg();
		memblock = new char [size];
		file.seekg (0, ios::beg);
		file.read (memblock, size);
		file.close();
		cout << "the complete file content is in memory"<<size;
		delete[] memblock;
	}
	else cout << "Unable to open file";
	getch();
	return 0;
}
