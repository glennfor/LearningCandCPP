#include <stdio.h>
#include <math.h>
#include <conio.h>
main()
{
	int i, j;
	printf("%d\n", 2);
	for(i = 3; i <= 100; i = i + 1)
	{
		for(j = 2; j < i; j = j + 1)
		{
			if(i % j == 0)break;
			if(j > sqrt(i))
			{
				printf("%d\n", i);
				break;
			}
		}
	}
	getch();
return 0;
}
