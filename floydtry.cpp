#include<conio.h>
#include<iostream>
#include<cstring>
#include<iomanip>
main(){
	using namespace std;
	int i, j, k, p=1;
	int number;
	cout<<"Enter number of rows to print:\n";
	cin>>number;
	for(i=1; i <=number; ++i){
		for(j=0; j < i; ++j)
			cout<<setw(2)<<right<<p++<<" ";
		cout<<endl;
	}
	getch();
}


