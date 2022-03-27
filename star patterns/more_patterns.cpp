#include <iostream>
#include <conio.h>
//#include <>
using std::cout;
using std::cin;
using std::endl;

main(){
	int size;
	cout << "Enter size of pattern(odd number):  ";
	cin >> size;
	cout << endl << endl;
	for(int i = 0; i <size; ++i){
		for(int j =0; j < size ; ++j)
		    cout << ((i==0 or j==0 or i==j or j==size-1 or i == size-1 or i +j == size-1)?'*' :' ');
        for(int j =0; j < size ; ++j)
		    cout << ((i+j==size/2 or i-j == size/2 or j-i == size/2 or i+j==(3*size-1)/2-1 or i==size/2 or j==size/2 )?'*' :' ');
		cout <<"  ";// a small space to distinguish the arrow
		for(int j =0; j < size ; ++j)
		    cout << ((j-i == size/2 or i+j==(3*size-1)/2-1 or i==size/2)?'*' :' ');
		cout << "  ";
        for(int j =0; j < size ; ++j)
		    cout << (((i+j<size/2 or i-j > size/2) and( j-i > size/2 or i+j>(3*size-1)/2-1) )?'*' :' ');

		cout << endl;
	}
	cout << endl <<endl;

	getch();
}
