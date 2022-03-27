/*Exercise 2-6. Write a function setbits(x,p,n,y) that returns x with the n bits that begin at
position p set to the rightmost n bits of y, leaving the other bits unchanged.

Exercise 2-7. Write a function invert(x,p,n) that returns x with the n bits that begin at
position p inverted (i.e., 1 changed into 0 and vice versa), leaving the others unchanged.

Exercise 2-8. Write a function rightrot(x,n) that returns the value of the integer x rotated
to the right by n positions*/

#include <iostream>
#include <conio.h>
#include <iomanip>

unsigned int setbits(int, int, int, int);
unsigned int invert(int, int, int);
unsigned int rightrot(int , int);

main(){//test functions
	std::cout<<setbits(17, 4,3,7);//worked
	std::cout<<std::endl<<invert(15, 3, 2);//worked
	//Additional functions
	//The g++ compiler provides the following functions for counting bits:
	//• __builtin_clz(x): the number of zeros at the beginning of the number
	//• __builtin_ctz(x): the number of zeros at the end of the number
	//• __builtin_popcount(x): the number of ones in the number
	//• __builtin_parity(x): the parity (even or odd) of the number of ones

	int x = 5328; // 00000000000000000001010011010000
	std::cout << __builtin_clz(x) << "\n"; // 19
	std::cout << __builtin_ctz(x) << "\n"; // 4
	std::cout << __builtin_popcount(x) << "\n"; // 5
	std::cout << __builtin_parity(x) << "\n"; // 1
	getch();

}

unsigned int setbits(int x, int p, int n, int y){
	if(p<n) return 0;//when position is shorter than number of bits to be set
	int bits=(1<<n)-1;//set n bits to 1
	bits=bits&y;//set bits now to rightmost bits of y
	int mask=bits<<(p-n);//bits shifted to position
	
	return x|mask;//setting bits in x
}

unsigned int invert(int x, int p, int n){
	int bits=(1<<n)-1,
	 mask=bits<<(p-n);
	
	return x^mask;//inverting bits
}

/*Exercise 11-6: Write a program that will take all the bits in a number and shift them to the left
end. For example, 01010110 (binary) would become 11110000 (binary)*/
