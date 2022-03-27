/*
Exercise 10-1: The C++ standard contains a boolean type (bool) that defines the values true
and false. The problem is most compilers haven't implemented this type yet. Create a boolean
type by using #define to define values for BOOLEAN, TRUE, and FALSE.

Exercise 10-2: Write a macro that returns true if its parameter is divisible by 10 and false
otherwise.
Exercise 10-3: Write a macro is_digit that returns true if its argument is a decimal digit.
Write a second macro is_hex that returns true if its argument is a hex digit (0-9 A-F a-f). The
second macro should reference the first.

Exercise 10-4: Write a preprocessor macro that swaps two integers. (If you're a real hacker,
write one that does not use a temporary variable declared outside the macro.)
*/

#include <iostream>
# include <conio.h>
//check for digits
#define is_digit(a)   ((a)>=0 and (a)<=9?true:false)// modify later to
//because e.g is_digit('\b')==true

//check for hexnumber
//NB: can only check for data stored as characters
# define is_hex(a)   ((is_digit(a)) ||((int)(a))>=65 && ((int)(a)<=70)\
                       || ((int)(a))>=97 && ((int)(a)<=102)? true:false )
//swap two integers
#define swap(a, b)   a=a+b; b=a-b; a=a-b

//check divisibility by ten
#define div_by_ten(a)  ((a)%10? false: true)

# define TRUE 1
# define FALSE 0

main(){
	for(int i=1;i<120;++i){
		std::cout<<i<<"   "<<is_digit(i)<<"  "<<is_hex((char)i)<<"  "<<div_by_ten(i)<<"\n";
	}
	int p=5, q=9;
	std::cout<<'p'<<" = "<<p<<"   and q = "<<q<<std::endl;
	swap(p,q);
	std::cout<<'p'<<" = "<<p<<"   and q = "<<q<<std::endl;
	getch();
}
