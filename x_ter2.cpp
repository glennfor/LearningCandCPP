#include <iostream>
#include <conio.h>
using namespace std;
main(){
	int high=100, low=1, i;
	for(i=low;i<=high; ++i){
		if(!(i%3) and i%5) cout<<"Fizz";// or simply if(not i%15) because if a number
		// divides two numbers ir means it divides their product
		else if(!(i%5) and i%3) cout<<"Buzz";
		else if(!(i%5) and !(i%3)) cout<<"FizzBuzz";
		else cout<<i;
		cout<<endl;
	}
	getch();
}
