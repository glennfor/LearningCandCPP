#include <iostream>
#include <conio.h>
using std::cout;
using std::cin;
int reverse(const int);
main(){
	int num;
	cout << "Enter a number to reverse: \n";
	cin >> num;
	cout << num <<" reversed is " <<reverse(num);
	getch();
}

int reverse(const int x){//4321
	int temp = x, retval = 0;
	while(temp){
		retval = retval*10 + temp%10;
		temp /= 10;
	}
	return retval;
}
