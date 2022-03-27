#include <stdio.h>
#include <stdarg.h>
 float sum(int, ...);
int main(){
	printf("%f\n", sum(1,3,2,44,5));
	printf("%f\n", sum(1.5, 6));
	getch();
}

float sum(int a, ...){
	long retval;
	int i;
	va_list numbers;
	va_start(numbers, a);
	for(i = 0; i < a; ++i)
		retval +=i;
}

#include <cstdarg> // needed to use ellipses
// The ellipses must be the last parameter
double FindAverage(int nCount, ...)
{
    long lSum = 0;

    // We access the ellipses through a va_list, so let's declare one
    va_list list;

    // We initialize the va_list using va_start.  The first parameter is
    // the list to initialize.  The second parameter is the last non-ellipse
    // parameter.
    va_start(list, nCount);

    // Loop nCount times
    for (int nArg=0; nArg < nCount; nArg++)
         // We use va_arg to get parameters out of our ellipses
         // The first parameter is the va_list we're using
         // The second parameter is the type of the parameter
         lSum += va_arg(list, int);

    // Cleanup the va_list when we're done.
    va_end(list);

    return static_cast<double>(lSum) / nCount;
}

int main()
{
    cout << FindAverage(5, 1, 2, 3, 4, 5) << endl;
    cout << FindAverage(6, 1, 2, 3, 4, 5, 6) << endl;
}
