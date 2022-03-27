#if 0
 Write a tutorial to demonstrate the effect of bitwise operators. First
read two decimal integers from the keyboard and store them in the variables
x and y.Then use the function putBits() to output the bit patterns
of x, x&y, x | y, x ^ y, and ¡«x.
To demonstrate the shift operators, shift the value of x a given number of
bit positions right and left. Read the number of bit positions from keyboard
input. Use the value 1 in case of invalid input.
The opposite page shows sample output from the program.
#endif
/***************************************************
**EFFECTS OF BITWISE OPERATORS********************
*************************************************/

# include <iostream>
# include <conio.h>
# include  <cstdlib>
# include <cstdio>
# include <sstream>

 using namespace std;
 
 void menu(){
		cout<<"BITWISE OPERATIONS\n\n";
		cout<<"NOTE: bitwise operations are only valid on integral types\nOPERATORS\n";
		cout<<"&  :Logical bitwise AND\n|  :Logical bitwise OR(INCLUSIVE OR)\n^  :Logical\
 bitwise EXCLUSIVE OR(XOR)\n~  :LOgical bitwise NOT(2's complement)\n>> :Right shift\n<< :Left\
 shift\n\n";
 }
 
 void putbits(int a){
		int c, i;
	for(c=16-1,i=0; c>=0; --c, ++i){
		int k=a>>c;
		if(!((c+1)%4) and c>0) cout<<" ";
		if(k&1) cout<<"1";
		else cout<<"0";
	}
}

main(){
	printf("LEARNING BIT MANIPULATION?:\n\n");
	menu();
	cout<<"\n\nTIME FOR ILLUSTRATIONS\n";
	back:
	cout<<"Enter two integers:\n";
	 int x, y;
	if(cin>>x>>y);
	cout<<"Bit patterns:\n";
	cout<<x<<" = ";putbits(x);
	cout<<endl<<y<<" =";putbits(y);
	cout<<endl<<x<<" & "<<y<<" =";putbits((x&y));
	cout<<endl<<x<<" | "<<y<<" =";putbits((x|y));
	cout<<endl<<x<<" ^ "<<y<<" ="; putbits((x^y));
	cout<<"\n\nhow many bits do you want x="<<x<<" to be shifted:\n";
	int shift;
	cin>>shift;
	cout<<endl<<x<<" << "<<shift<<" =";putbits((x<<shift));
	cout<<endl<<x<<" >> "<<shift<<" =";putbits((x>>shift));
	cout<<endl<<endl;
	cout<<"Go again? (yes or no)\n";
	string ans;
	cin>>ans;
	if(ans=="yes") goto back;
	getch();
}
