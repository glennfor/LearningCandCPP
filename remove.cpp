#include <bits/stdc++.h>
#include <iostream>
#include <conio.h>
inline int cube(int x){
	return x*x*x;
}
bool isams(int num){//check for amstrong number
    int sum=0, temp=num;
	while(temp){
		sum += cube(temp%10);
		temp /= 10;
	}
	return sum==num;
}
main(){
	for(int i =0; i<1000000;++i)
	    if(isams(i))std::cout<<i<<std::endl;
	getch();
}
