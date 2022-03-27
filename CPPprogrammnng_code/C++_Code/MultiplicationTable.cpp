/*program to print a multiplication table
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

main(){
	short column, row, count, i, j;
	string line(60, '-');
	cout<<line<<endl;
//	cout<<"Limit length of number  of COLUMNS to a MAXIMUM OF 18 due to insufficient size\
//	of console window to accomodate data\n";
	 cout<<line<<endl;
	cout<<"Enter the number of the rows and columns respectively:-\n";
	cin>>row>>column;
	cout<<"\t\tMULTIPLICATION TABLE\n\t"<<line<<endl;
	//starting with a row
	printf("%4s", " ");
	for(i=0;i<=column;++i)
	printf("%4d", i);//prints the row across
	cout<<endl<<endl;
	// then table
	for(i=0;i<=row;i++){
		printf("%4d", i);//prints the column downwards
		for(j=0;j<=column;++j)
		printf("%4d", i*j);// prints the products
		printf("\n\n");
	}
	getch();
}
