# include <iostream>
# include <conio.h>
#include <ctime>
#include <cstdlib>
#include <string>

/**************************
**I just discovered it takes exactly 1 second to iterate from 0 to 1e8***
**oops actually execution time is variable
**USEFUL TO CREATE A WAIT FUNCTION************/

inline void WAIT(unsigned n)
  {
  for(int i=0; i<(n)*100000000l;++i)
  /*Do nothing :::just waste time*/;
  }

using namespace std;

main(){
	string line(60, '-');
	long t1, t2;
	cout<<__TIME__;//outputs current time as a string literal "HH:MM:SS" hour :min:sec
	cout<<endl<<__DATE__;//outputs date as a string literal as well in the
						// form "MMM:DDD:YYYY" month, day, year
	cout<<endl<<__FILE__;//outputs the file name as a string
	cout<<endl<<line<<endl;
    time(&t1);//assigns number of seconds since 1/11970, 0:0 to t1
	cout<<"Hello,";
	WAIT(1);
	cout<<"World\n";
	time(&t2);//assigns current time as number of seconds since 1/11970, 0:0 to t2
	cout<<endl<<t2-t1;
	long now, t3;
	time(&now);// assigns seconds to time
	string tm=ctime(&now);//convert seconds to string literal
	localtime(&t3);//dont know use yet
	/*ctime() converts the current time in seconds into and returns a string made up of exactl
*********************  26 ************
*****characters including the terminating null character '\0';
Format:::: "weekday month day hour:minute:second year \n\0"
example::: "Wed Jan 05 02:03:55 2000\n\0"
	*/
	cout<<endl<<tm/*<<t3<< ctime(&t3)*/<<endl;
	system("date");
	getch();
}
/*
The function time() returns the current time as the number of seconds since 1/1/1970, 0:0. The
number of seconds is stored in the variable sec, whose address was supplied as &sec when the
function was called.

The function ctime() converts the number of seconds to a string with a date and time and
 returns this string. The string comprises exactly 26 characters including the null
 character \0 and has the following format:
	*/


/*
struct tm//Struct tm in header file ctime
{
int tm_sec; // 0 - 59(60)
int tm_min; // 0 - 59
int tm_hour; // 0 - 23
int tm_mday; // Day of month: 1 - 31
int tm_mon; // Month: 0 - 11 (January == 0)
int tm_year; // Years since 1900 (Year - 1900)
int tm_wday; // Weekday: 0 - 6 (Sunday == 0)
int tm_yday; // Day of year: 0 - 365
int tm_isdst; // Flag for summer-time
};

#include <iostream>
#include <ctime>
using namespace std;
struct tm *ptr; // Pointer to struct tm.
time_t sec; // For seconds.
. . .
time(&sec); // To get the present time.
ptr = localtime(&sec); // To initialize a struct of
// type tm and return a
// pointer to it.
cout << "Today is the " << ptr->tm_yday + 1
<< ". day of the year " << ptr->tm_year
<< endl;
. . .
*/
