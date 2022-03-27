#if 0
Given weights and the values of n items ,put these items in a knapsack of capacity W to get he maximum total
value in the knapsack. In other words given two integr arrays val[0..n-1] and wt[0...n-1] which represent
values and weights associated with n items respectively. Also given an integer W which represents knapsack
capacity find out the maximum value subset of val[] such that the sum of weights of this subset is smaller
than or equal to W.
You cannot break down an item, either pick up the complete item or don`t pick it up (0-1 property)
#endif

#include <stdio.h>

int knapsack(int , int[], int[], int);
main(){
	getch();
}

//returns the maximum value that can be put in a knapsack of capacity W
int knapsack(int W, int wt[], int val[], int n){
	int i, w, k[n+1][W+1];
	//build table k[][] in bottom up manner
	for(i = 0; i <= n; ++i){
		for(w=0; w <= W; w++){
			if(i==0 || w==0) k[i][w]=0;
			else if(wt[i-1] <= w) k[i][w] = max(val[i-1]+k[i-1][w-wt[i-1]], k[i-1][w]);
			else k[i][w] = k[i-1][w];
		}
	}
	return k[n][W];
}
