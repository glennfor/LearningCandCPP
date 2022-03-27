
//THIS ONE WORKS :;CHECK OUT

/*********************************************************
* Read -- read in up to 100 numbers and sum them *
* *
* Usage: *
* read *
* *
* Numbers are in the file "numbers.dat" *
* *
* Warning: No check is made for a file with fewer than *
* 100 numbers in it *
********************************************************/
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <conio.h>
#include <memory.h>
using namespace std;
main(){
	ofstream fob("numbers.dat");
	if(fob.good()){
		for(int i = 0; ++i < 200; fob << rand()%rand() << endl) ;
	}
	fob.close();
	const int DATA_SIZE = 100; // Number of items in the data
	int data_array[DATA_SIZE]; // The data
	memset(data_array, 0, DATA_SIZE);
	ifstream data_file("numbers.dat"); // The input file
	if (data_file.bad() ){
		cerr << "Error: Could not open numbers.dat\n";
		getch();
		exit (8);
	}
	int count;
	for (count =0; (count < 100) and (data_file >> data_array[count]); ++count);
	int total = 0; // Total of the numbers
	for (int i = 0; i < count; ++i)
		total += data_array[i];
	cout << "Total of all the numbers is:" << total << '\n';
	getch();
	return (0);
}

