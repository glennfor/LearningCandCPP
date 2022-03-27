// factorial calculator
#include <iostream>
#include <cstdlib>
using namespace std;
long factorial (long a)
{
if (a > 1)
return (a * factorial (a-1));
else
return (1);
}

int main ()
{
long number;
cout << "FACTORIAL PROGRAM\n\ntype a number: ";
cin >> number;
cout << number << "! = " << factorial (number)<<endl<<endl;
system("pause");
return 0;
}
