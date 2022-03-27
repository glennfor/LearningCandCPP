#include <iostream>
#include <conio.h>
#include <iomanip>

using std::endl;
using std::cout;
using std::cin;

#define OR ||
main(){
	int amp, height, wl, x, h;//wl is the wave lenght
	cout << "Enter the amplitude(not height) of the waves: " <<endl;
	cin >> amp;
	height = wl = amp ;//* 2;
	h= height - 1;
	x = h;
	//style  1
	for(int i = 0; i <= h; ++i){
		for(int j = 0; j <=wl*h*2; ++j)
		    if(j%(h*2) == x OR j%(h*2) == h+i) cout << '|';//  |, *, $
		    else cout << ' ';
		x--;
		cout << endl;
	}
	 cout <<endl <<endl;
	 char p = 'A';
	 x = h;
	for(int i = 0; i <= h; ++i){
		for(int j = 0; j <=wl*h*2; ++j)
		    if(j%(h*2) == x OR j%(h*2) == h+i) cout << p++;
		    else cout << ' ';
		x--;
		cout << endl;
	}

	getch();
}
