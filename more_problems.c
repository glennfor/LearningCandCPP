rod cutting problem
Given a rod of length n inches and and and array of prices that
contain the prices of all the piecesof size smaler than n.
determine the maximum value obtainable by cutitting up the rod snd selling
the pieces.Fr example, if the length is 8 and then values of the different pieces
are given as following then the maximum obtainable value
is 22(by cutting in to two lengths of 2 and 6)

//returns the best obtainable price for a rod of length n and price[] as prices
//of different pieces





int cutRod(int price[], int n){
	if (n <= 0) return 0;
	int max_val = INT_MIN, i;
	//recursively cut the rod in different pieces and compsre different configurations
	for(i = 0; i < n; ++i){
		max_val = max(max_valm price[i]+cutRod(price, n-i-1));
	}
	return max_val;
}

coin change problem
Given a value N , if we want to make a change for N cents and we
have and infinite supply of each ofS = {s1, s2, ..., Sm} valued coins how many ways
can we make the change?The order of coins does not matter
For exaple for N = 4 and S = {1,2,3} there are four solutions{1,1,1,1},{1,1,2},{2,2},
{1,3}. so the outputis 4.For n = 10 and S = {2,5,3,6} there are five solutions
[2,2,2,2,2], [2,2,3,3],[2,3,5],[5,5], [2,2,6],so the output is 5

int count(int S[], int m, int n){
	//table will be storing numbert of solutions for value i.we need n+1 rows as the table is constructed
	//in the bottom up manner using the base case n =0
	int table[n+1], i, j;
	//base case (if given value is 0)
	table[0] =1;
	//pick all coins none by one and update the table[] values after the index greatre than or equal to the
	//value of the picked coin
	for(i = 0; i < m; ++i)
		for(j = S[i]; j <= n; j++)
		    table[j] += table[j-S[i]];
	return table[n];
}







