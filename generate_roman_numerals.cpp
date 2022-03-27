#include <iostream>
#include <conio.h>
using namespace std;
string generate_roman_numeral_of(int);
main(){
	cout << "Enter an Arabic numeral to get it's Roman Equivalent:\n";
	int number;
	cin >> number;
	cout << "Roman equivalent of " << number << " is [  "
	     << generate_roman_numeral_of(number) << "  ]";
	getch();
}

string generate_roman_numeral_of(int number){
	string roman_equivalent;
	switch(number)
	{
		case 1:
			return roman_equivalent = "I";
		case 5:
			return roman_equivalent = "V";
		case 10:
			return roman_equivalent = "X";
		case 50:
			return roman_equivalent = "L";
		case 100:
			return roman_equivalent = "C";
		case 1000:
			return roman_equivalent = "M";
	}
	return roman_equivalent;
}
