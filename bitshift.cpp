/*Exercise 11-6: Write a program that will take all the bits in a number and shift them to the left
end. For example, 01010110 (binary) would become 11110000 (binary).*/

#include <iostream>
#include <conio.h>
#include <cmath>
#include <algorithm>

#define MAX_NO_BITS  32//for long integers

using namespace std;

void tobin(int, int[]);//takes individual bits and stores them in an array
void shift(int[]);//sorts the array
int todec(int[]);//converts back to binary

/*maximum number of bits a number can have is ceil(log2(number))*/
inline int maxbits(int x){//number of bits the number actually has
	if (x)
		return floor((log10(x)/log10(2)))+1;
	return 1;//incase of 0
}


main(){
	int number;
	//int holdbits[MAX_NO_BITS];
	cout<<"Enter a number to left-shift its 'ON' bits:\n";
	cin>>number;
	int bitnum=maxbits(number);
	
	//int* holdbits = new (nothrow) int[maxbits(number)];
	int holdbits[bitnum];

	tobin(number, holdbits);
	
	shift(holdbits);
	
	for(int y=0; y<bitnum-1; ++y)cout<<holdbits[y];
	
	cout<<endl<<"After shifting "<<number<<" yields "<<todec(holdbits);
	getch();
}

void tobin(int n, int arr[]){//this puts the bits in reverse order
	int it=0;
	 	#define max sizeof(arr)/sizeof(int)
	 for(int c=max; c>=0; --c){
		int k=n>>c;
		
		if(k&1) arr[it++]=1;
		else  arr[it++]=0;
	}
	 /*
	while(n>>1 !=0){
		if(n&1) arr[it++]=1;
		else arr[it++]=0;
	}
	//reverse the array
	for (int j=max-1, k=0; j>k; j--,++k)
		swap(arr[j], arr[k]);
  
	*/
	}

void shift(int array[]){
	int m=0, n=0;
		#define max sizeof(array)/sizeof(int)
	int bitnum=max;
	while (m < bitnum){
		n=0;
		while(n < bitnum-m-1){
  			if (array[n] > array[n+1])
			swap(array[n], array[n+1]);
			++n;
		}
	++m;
	}
}

int todec(int arr[]){
    	#define max sizeof(arr)/sizeof(int)
    int bitnum=max;
    cout<<bitnum;
	int t=0;
	int retval=0;
	while(t<bitnum){
		retval += arr[t]<<t;
		++t;
	}
	return retval;
}
