//N=input(‘Enter an integer greater than zero’)
//K=1
//loop for ROW=O to N-1
//loop for COLUMNS to N-1
//A[ROW][COLUMN]=K
//K=K+1
//end loop
//end loop

#include <stdio.h>

main(){
	int N, k = 1, i, j;
	printf("Enter Array Size > 0: ");
	scanf("%d", &N);
	int arr[N][N];
	for(i =0; i < N; ++i){
		for(j = 0; j < N; ++j)
		    arr[i][j] = k;
	k += 1;
	}
	for(i =0; i < N; ++i){
		for(j = 0; j < N; ++j)
		    printf("%2d ", arr[i][j]);
  	puts("");
	}
	getch();
}
