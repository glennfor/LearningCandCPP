#include <iostream>
#include <conio.h>
#include <iomanip>

using std::endl;
using std::cout;
using std::cin;

main(){
    	//all patterns are in the form of a triangle
	int size;
	cout << "Enter the size of the triangles : " <<endl;
	cin >> size;
		//pattern 1 was square.cpp/.exe

    	//pattern 2;
	cout << "EQUILATERAL TRIANGLES" <<endl <<endl;
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

}
