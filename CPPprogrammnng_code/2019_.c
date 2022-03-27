#include<stdio.h>

//Get to me if any explanations are needed gn

void fillRowForward(int A[5][5], int top, int left, int right, int *ptZ)
{
	for(; left <= right; ++left)
	{
	    A[top][left] = *ptZ;
	    (*ptZ) ++;
	}
}

void fillRowBackward(int A[5][5],int  bottom, int left, int right, int *ptZ)
{
	for(; right >= left; --right)
	{
	    A[bottom][right] = *ptZ;
	    (*ptZ) ++;
	}
}

void fillColumnDownward(int A[5][5], int top, int bottom, int right, int *ptZ)
{
	for(; top <= bottom; ++top)
	{
	    A[top][right] = *ptZ;
	    (*ptZ) ++;
	}
}

void fillColumnUpward(int A[5][5],int  top, int bottom, int left, int *ptZ)
{
	for(; bottom >= top; --bottom)
	{
	    A[bottom][left] = *ptZ;
	    (*ptZ) ++;
	}
}


void spiralOrder(int A[5][5]){
	int top = 0, right = 4, left = 0, bottom = 4,  fillValue = 1;
	while(fillValue <= 5*5)
	{
        fillRowForward(A, top, left, right, &fillValue);
		top ++;
		fillColumnDownward(A, top, bottom, right,&fillValue);
		right--;
		fillRowBackward(A, bottom, left, right, &fillValue);
		bottom--;
		fillColumnUpward (A, top, bottom, left, &fillValue);
		left++;
	}
}


main(){

	int A[5][5]={0}, i, j;
	spiralOrder(A);
	printf("\n\n");
	for(i = 0; i < 5; ++i){
		for(j = 0; j < 5; ++j)
		    printf("%4d ", A[i][j]);
		printf("\n\n\n");
	}
	getch();
}
