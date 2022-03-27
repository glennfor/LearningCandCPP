#include <iostream>
#include <conio.h>

main(){
	int max;
    for(int i=1; i < (max=8); ++i){
		for(int j=i; j<=i*i; j+=i)
		std::cout<<j<<" ";
		std::cout<<std::endl;
    }
    getch();
}
