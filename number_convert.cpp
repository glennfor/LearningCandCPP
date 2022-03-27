/*Exercise 8-6: Write a program that converts numbers to words. Example: 895 results in ''eight
nine five."
Exercise 8-7: The number 85 is said "eighty-five" not "eight five." Modify the previous
program to handle the numbers 0-100 so all numbers come out as we really say them. Example:
13  Þ "thirteen," 100  Þ "one hundred."
*/

#include <iostream>
#include<conio.h>
#include <iomanip>
using namespace std;
void number(int);//modify to return a string instead
main(){
	//doing second exercise
	int num, i, k, n;
	for(i=1; i <=100; ++i){
		number(i);cout<<endl;
	}
	getch();
}

void number(int num){
	if(num<0 or num>100){
		cout<<"Range is 1 to 100";
	}
	else{
		if(num % 100 <10 and num!=100){
			switch(num){
				case 0:cout<<"Zero";break;
				case 1:cout<<"one";break;
				case 2: cout<<"two"; break;
				case 3:cout<<"three"; break;
				case 4: cout<<"four"; break;
				case 5: cout<<"five"; break;
				case 6: cout<<"six"; break;
				case 7: cout<<"seven"; break;
				case 8: cout<<"eight"; break;
				case 9: cout<<"nine";
			}
		}
		else if(num<20){//ie num%100 < 20
				switch(num){
					case 10: cout<<"ten"; break;
					case 11: cout<<"eleven"; break;
					case 12: cout<<"twelve"; break;
					case 13: cout<<"thirteen"; break;
					case 15: cout << "fifteen"; break;
					default:{
						number(num%10);cout<<"teen";}
				}
			}
		else if(num%10==0){//number like 10, 20, 30, ...
			switch(num){
				case 20: cout<<"twenty"; break;
				case 30: cout<<"thirty"; break;
				case 40: cout<<"forty"; break;
				case 50: cout<<"fifty";break;
				case 60: cout<<"sixty";break;
				case 70: cout<<"seventy"; break;
				case 80: cout<<"eighty"; break;
				case 90: cout<<"ninety"; break;
				case 100: cout<<"one hundred"; break;
			}
		}
	  else {
			number(num-num%10);
			 number(num%10);
	  }
}
}
