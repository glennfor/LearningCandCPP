
Considering a game where a player can score 3 or 5 or 10 points in one move.
Given the total score n
find the number of ways to reach the given score

//function returns number of ways
int count(int n){
	//table[i] will store the count of solutions for i
	int table[n+1], j;
	//initialise all table values as 0
	for(j = 0; j < n+1; ++j) table[j] = 0;
	//base case(if given value is 0)
	table[0] = 1;
	one by one consider given 3 ways and upadte table[] values after the index
	greater than
	or equal to the value of the picked move
	for(j =3; j <= n; ++j)
		table[j] += table[j-3];
	for(j = 5;  j <= n ; ++j)
		table[j] += table[j-5];
	for(j =10; j <= n; ++j)
		table[j] += table[j-10];
	return table[n];
}
