#include <stdio.h>

#define absval(x) ((x)>0 ? (x) : -(x))

main(){
	int c=5,  h=c, i, j, k;
	for(i=0; i<=h*2; ++i){
		for(j=0; j<=h*2; ++j)
			if(i==j || i+j==h*2)
				printf("%d", absval(c));
			else printf(" ");
		printf("\n");
		c--;
	}
	getch();
}
