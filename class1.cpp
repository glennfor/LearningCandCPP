/*Exercise 13-1: Write a Parity class. This class allows the program to put any number of items
into it and returns TRUE if an even number of items is put in and FALSE if an odd number is
used.
Member functions:
void Parity::put(void); // Count another element
bool Parity::test(void); // Return TRUE(1) if an even number of
puts have been done. Return FALSE(O)
for an odd number.
*/

#include<iostream>
#include <conio.h>
#include <cstdlib>

const int MAX_ITEMS=50;

class Parity{
	private:
		int count;//number of items
		int items[MAX_ITEMS];//items supplied
	public:
		Parity(void);//constructor to initialise class
		bool test(void);//as above
		void put(void);//as above
		~Parity(void);//destructor to destroy variable
};

Parity::Parity(void){//constructor to initialise the class Parity variables
	count=0;
}

bool Parity::test(void){
	return !(count%2);//true for even numbers
}

void Parity::put(void){//implementin the put member function
	std::cout<<"Enter an element:\n";
	std::cin.sync(), std::cin.clear();
	if(std::cin>>items[count++] and count < MAX_ITEMS)
		;
	else return;
}

Parity::~Parity(void){
	/*do nothing*/
}


main(){//testing
	Parity intlist;
	std::cout<<"Enter 10 elements:\n";// <stop with 'any non-digit character'>\n";
	for(int i=0;i<=10 ; ++i){
		intlist.put();
	}
	std::cout<<"\nAnalysis \nParity:    "<<std::boolalpha<<intlist.test()<<"\n";
	std::cout<<"END";
	getch();
}
