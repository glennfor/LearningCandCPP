//If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
//The sum of these multiples is 23.

//Find the sum of all the multiples of 3 or 5 below 1000.

#include <iostream>
#include <conio.h>

#define UPPERLIMIT   1000
main(){
	int i, sum=0;
	for( i=0; i<UPPERLIMIT; ++i){
		if(i%3==0 or i%5==0) sum+=i;
	}
	std::cout<<"SUM = "<<sum;
	getch();
}
