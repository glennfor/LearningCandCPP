/*Exercise 11-6: Write a program that will take all the bits in a number and shift them to the left
end. For example, 01010110 (binary) would become 11110000 (binary).*/

#include <iostream>
#include <conio.h>
#include <cmath>


#define MAX_NO_BITS  32//for long integers

inline int maxbits(int x){//number of bits the number actually has
	if (x)
		return floor((log10(std::abs(x))/log10(2)))+1;
	return 1;//incase of 0
}


main(){
	int number;
	begin:
	std::cout<<"Enter a number to left-shift its 'ON' bits:\n";
	std::cin>>number;
	int no_set=0;//number of bits set to one
	for(int index=0; index < MAX_NO_BITS; ++index){
		if((number >> index)&1) ++no_set;
	}
	int maxb=maxbits(number)
	,mask1=(2<<maxb-1)-1 //int(pow(2, maxb)-1)//-->number of bits all set to 1
	, unset=maxb-no_set
	, mask2= (2<<unset-1)-1  //int(pow(2,unset))-1//-->number of unset bit
	, realmask=mask1 &(~mask2);//set last unsetbits to 0
	std::cout<<std::endl<<number<<" when shifted as described yields "<<realmask;
	std::cout << "\n\n";
	goto begin;
	getch();
}

