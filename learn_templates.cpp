#include <iostream>
#include <conio.h>
using std::cout;
using std::endl;

template< typename T>
T maxim(T& a, T& b){
	return a > b? a : b;
}
int main(){
	int a = 06543, b = 0xdeF, *p = &b, *pp = &a;
	long l1 = 9023L, l2 = 2<<10;
	cout << maxim(p, pp) <<endl;
	cout << maxim(a, b) <<endl;
	cout << maxim(l1,l2);
	getch();
}
