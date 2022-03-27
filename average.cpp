
#include<conio.h>
#include<iostream>
/************************************************************
**PROGRAM TO CALCULATE THE AVERAGE OF ANY NUMBER OF NUMBERS**
*************************************************************/
using namespace std;
main(){
	int number=0;/*number of numbers*/
	float data, /*numbers*/ sum, /*sum of NUMBERS*/ average;
	sum=0.0;//initialising sum to 0
	average=0.0;
	
	/*
************MODIFY LATER TO DO MULTIPLE CALCULATIONS
	*/
	cout<<"PROGRAM TO CALCULATE THE AVERAGE OF ANY NUMBER OF NUMBERS\n\n"
	<<"Enter values of the numbers:\n"<<
	"\t ENTER ANY NON DIGIT(S) TO STOP INPUTTING DATA\n\n";
	while(cin>>data){
		sum+=data;
		++number;
	}
	if(number)
	average=sum/number;
	cout<<"\n\nAVERAGE:="<<average<<endl<<endl;
	cin.sync();
	cin.clear();
	cout<<"press any key to exit\n";
	getch();
}
