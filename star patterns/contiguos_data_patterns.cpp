#include <iostream>
#include <conio.h>
#include <iomanip>

using std::endl;
using std::cout;
using std::cin;
main(){
	//all patterns are in the form of a square
	int size;
	cout << "Enter the size of the squares : " <<endl;
	cin >> size;
		//pattern 1 was square.cpp/.exe
		
	//pattern 2;
	cout << " Contineous Numbers " <<endl << endl;
	for(int i =0; i < size; ++i){
	    for(int j =0 ; j < size ; ++j)
	        cout << std::setw(2) << i ;
		cout << endl;
	}
	
	//pattern 3;
	cout << endl << " Discrete Numbers " <<endl << endl;
	for(int i =0; i < size; ++i){
	    for(int j =0 ; j < size ; ++j)
	        cout << std::setw(2) << j ;
		cout << endl;
	}
	
		//pattern 4
	cout << endl << " Discrete  Letters " <<endl << endl;
	for(char i = 'A'; i < 'A'+size; ++i){
	    for(char j = 'A' ; j < 'A'+size ; ++j)
	        cout << std::setw(2) << j ;
		cout << endl;
	}

		//pattern 5
	cout << endl << " Contineous Letters " <<endl << endl;
	for(char i = 'A'; i < 'A'+size; ++i){
	    for(int j = 0 ; j < size ; ++j)
	        cout << std::setw(2) << i ;
		cout << endl;
	}

	getch();
}










