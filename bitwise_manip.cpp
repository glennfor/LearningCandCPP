
#if 6>10
Exercise 1
a. Write the function putBits() that outputs the bit pattern of a number
as an unsigned int type. Only the 16 least significant bits are to be
output no matter what the size of the computer word.The number is
passed as an argument to the function, which has no return value.

b. Write a tutorial to demonstrate the effect of bitwise operators. First
read two decimal integers from the keyboard and store them in the variables
x and y.Then use the function putBits() to output the bit patterns
of x, x&y, x | y, x ^ y, and ¡«x.
To demonstrate the shift operators, shift the value of x a given number of
bit positions right and left. Read the number of bit positions from keyboard
input. Use the value 1 in case of invalid input.
The opposite page shows sample output from the program.

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
# include <cstdio>
# include <sstream>
 using namespace std;

int to_int(const char bitstr[])
{
	int i=0, value=0;
	while(bitstr[i]!='\0')
	{
		value=(value<<1)+int(bitstr[i]-'0');
		i++;
	}
	return value;
}
void putbits(unsigned int);
main(){
	printf("Enter a number to get its bit pattern..:\n");
	unsigned int number;
	string raw_input;
	getline(cin, raw_input);// or simply cin>>number;
	cout << endl << to_int(raw_input.c_str()) <<endl;
	stringstream(raw_input)>>number;
	if(number>=0){
	    cout<<endl<<"The bit pattern of "<<number<<" is :\n\n";
	    putbits(number);
   }
   else cout<<"Positive Integers only";
   
	cout<<endl<<endl;
	getch();
}

void putbits(unsigned int a){
	for(int c=16-1; c>=0; --c){
		int k=a>>c;
		if(!((c+1)%4) and c>0) cout<<" ";
		if(k&1) cout<<"1";
		else cout<<"0";
	}
}
