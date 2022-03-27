#include <stdio.h>
#define absval(x)   ((x) > 0 ? (x) : -(x))
#define OR ||
main(){
	int height = 8, i, j, count = height;
	for(i = 0; i <= height*2; ++i){
		for(j = 0; j <= height*2; ++j){
			if(i==j OR i+j==(height*2))
				printf("%d",absval(count));
			else printf(" ");
		}
		printf("\n");
		count--;
	}
	getch();
}
