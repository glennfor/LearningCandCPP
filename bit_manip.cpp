#if 0
Exercise 2
Your task is to encrypt data to prevent spying during data communications.The
sender uses a filter to encrypt the data in question, and the receiver uses the
same filter to decrypt the transmission.
a. Define the function swapBits() that swaps two bits in an int value.The
int value and the positions of the bits to be swapped are passed as arguments
to the function.The return value is the new int value. If one of
the positions passed to the function is invalid, the int value should be
returned unchanged.
b. Write a filter that swaps the bits at bit positions 5 and 6, 0 and 4, and 1
and 3 in all characters except control characters (defined as ASCII Code
>= 32).
Test the filter by writing the encrypted output to a file and then using the same
filter to output the new file.The output must comprise the original unencrypted
data.
#endif

# include <iostream>
# include <conio.h>
# include  <cstdlib>
# include <string>
# include <sstream>
 using namespace std;

int swapbits(int);// (number , swap1, swap2)
// (5,6)  (0, 4)  (1,3);

 void putbits(int a){
		int c, i;
	for(c=16-1,i=0; c>=0; --c, ++i){
		int k=a>>c;
		if(!((c+1)%4) and c>0) cout<<" ";
		if(k&1) cout<<"1";
		else cout<<"0";
	}
}
#include <cmath>

unsigned int getbin(){
	char c;
	unsigned int val = 0;
	while ( (c = cin.get()) == ' ' || c == '\t' )
		; // Ignore leading blanks and tabs
	while( c == '0' || c == '1' ) // Read and convert
	{ // the binary number
		val = (val << 1) | (c - '0');
		c = cin.get();//can modify to also ignore inter spaces and tabs
	}
return val;
}


main(){
	int a; string buff;
	cout<<"Enter a number to get its binary equivalent:\n";
	getline(cin, buff);
	stringstream(buff)>>a;
	cout<<"\nBinary equivalent is: ";putbits(a); cout<<'\n';
	cout<<"Enter a binary number to get its decimal equivalent:\n";
	a=getbin();
	cout<<"Number is equivalent to :"<<a;
	getch();
}
