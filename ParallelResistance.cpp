#include<conio.h>
#include<iostream>
#include <string>
/********************************************************************************
**PROGRAM TO CALCULATE TOTAL RESISTANCE FOR ANY NUMBER OF RESISTORS IN PARALLEL**
*********************************************************************************/
using namespace std;//Introduces all names of namespace std into the global scope.
main(){
	begin:
	int num;/*number of resistors*/
	float R, /*resistances*/ sum, /*sum of reciprocals*/ tot_R;//total resistance
	string choice("yes");
	sum=0.0;//initialising sum to 0
	tot_R=0.0;
	cout<<"Enter resistance values of parallel resistors:\n"<<
	"\t ENTER ANY NON DIGIT TO STOP INPUTTING DATA\n\n";
	#define RECIPROCAL(n)   (1.0/(n))// reciprocals
	while(cin>>R){
		sum += RECIPROCAL(R);
	}
	tot_R=RECIPROCAL(sum);
	cout<<"\n\nTOTAL RESISTANCE:="<<tot_R<<" ohms"<<endl<<endl;
	cin.sync();//clear buffer
	cin.clear();
	check:
/*
	cout<<"\nGO AGAIN?:"<<endl;
	string next;
   cin>>next;
   if(next=="yes" or next=="Yes" or next=="YES" or next=="Yup" or next=="yup" or next=="YUP"
      or next=="1" or next=="yeah" or next=="YEAH" or next=="Yeah")goto begin;

  else if (next=="no" or next=="No" or next=="NO" or next=="NOPE" or next=="Nope" or next=="nope"
   or next=="0"){cout<<"\n\nEXITING...\n\n";exit(0); }
   
   
   //CHECK OUT SOME MISTAKES :DEBUG
   */
   cout<<endl<<"Do you wish to continue\?:"<<endl;
cin>>choice;
if(choice=="yes" || choice=="Yes" ||choice=="YES" or choice=="1")
    goto begin;
else if(choice=="no" || choice=="No" || choice=="NO" or choice=="0")
	goto end;
else{
    cout<<"\n______________________\nRespond with yes or no\n______________________\n";
	goto check;
}
end:
	getch();
}
