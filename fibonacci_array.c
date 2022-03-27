/*
Summary: Fibonacci Sequence is the series of numbers:
0, 1, 1, 2, 3, 5, 8, 13, 21, 34,...
*/

//FIBONNACCI SEQUENCE USING ARRAY
#include <stdio.h>

#include <stdlib.h>
int main() {
	int *fib, next, n, count;
	printf("FIBONACCI SEQUENCE\n\n");

	printf("Enter number of terms to display: ");
	scanf("%d",&n);

	fib=(int*)malloc (n*sizeof(int));
	fib[0]=0; fib[1]=1;
	printf("Fibonacci Series: %d + %d", fib[0], fib[1]);

	count=2;
	/* count=2 because first two terms are already displayed. */
	while (count<n) {
	//add first two
		next=fib[count-1] + fib[count-2];
			fib[count]=next;//
	//increment count
		++count;
		printf(" + %d", next);
	}
	printf(" + ...\n");
	getch();
	return 0;
}


 // Declare a non-pointer Storage to show it works
    Storage<int> cIntStorage(5);

    // Declare a pointer Storage to show it works
    int x = 7;
    Storage<int*> cIntPtrStorage(&x);

    // If cIntPtrStorage did a pointer assignment on x,
    // then changing x will change cIntPtrStorage too
    x = 9;
