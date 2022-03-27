//can be implemented more efficiently

//extend to display
//eg, 18 = 2*2*2*2*3=2^4*3
//later


#include <iostream>
#include <cstdlib>
#include <list>
#include <algorithm>
#include <cstdio>
#include <cmath>

using std::list;

bool is_prime(int n){
	//case: no check for 1,0, etc
	for(int i = 2; i < int(sqrt(n)+1); ++i)
	    if(n%i == 0)
	        return false;
	return true;
}


int find_last_but_one_factor(int n){
	for(int i = (n/2)+1; i>=1; --i)
	    if(n%i == 0)
			return i;
}


list<int> prime_fact(int num){
	list<int> prime_f;
	if(is_prime(num))
	{
		prime_f.push_back(num);
		return prime_f;
	}
	int n;
	while(not is_prime(num))
	{
		n=find_last_but_one_factor(num);
		prime_f.push_back(num/n);
		if(is_prime(n))
		{
			prime_f.push_back(n);
			return prime_f;
		}
		num = n;
	}
	return prime_f;
}


main(){
	int nm;
	printf("Enter an integer to factorise by primes: ");
	start:
	scanf("%d", &nm);
	list<int> primes(prime_fact(nm));
	//sort(primes.begin(), primes.end());
	std::cout <<std::endl <<std::endl << nm << " = ";
	list<int>::const_iterator iter = primes.begin();
	std::cout << *(iter++);
	while(iter != primes.end())
	{
		std::cout << "*" <<*iter;
		++iter;
	}
	std::cout << std::endl << std::endl << std::endl;
	goto start;
	system("pause");
}
