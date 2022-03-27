// Outputs three random numbers
#include <iostream> // Declaration of cin and cout
#include <cstdlib> // Prototypes of srand(), rand():
# include <conio.h>
// void srand( unsigned int seed );
// int rand( void );
using namespace std;
int main()
{
unsigned long seed;
int z1, z2, z3;
cout << " --- Random Numbers --- \n" << endl;
cout << "To initialize the random number generator, "
<< "\n please enter an integer value: ";
cin >> seed; // Input an integer
srand( seed); // and use it as argument for a
// new sequence of random numbers.
z1 = rand(); // Compute three random numbers.
z2 = rand();//nmbers b/w 0 and 32767 ie 16-bit systems
z3 = rand();
cout << "\nThree random numbers: "
<< z1 << " " << z2 << " " << z3 << endl;
getch();
return 0;
}/*
***The statement cin >> seed; reads an integer from the keyboard, because seed is of the
    unsigned int type
****The function prototypes for srand() and rand() can be found in both the cstdlib
     and stdlib.h header files.
****Calling the function rand() without previously having called srand() creates the
    same sequence of numbers as if the following statement would have been proceeded:srand(1);
****If you want to avoid generating the same sequence of random numbers whenever the
program is executed, you must call srand() with a different value for the argument
whenever the program is run.
****It is common to use the current time to initialize a random number generator.*/
