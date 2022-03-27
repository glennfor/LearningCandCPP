#include <iostream>
#include <conio.h>

main(){
	int min, j, k;
    for(int i=5; i > 0; --i){
		for(k=0; k<i; ++k)i%2?std::cout<<'*':std::cout<<' ';
		std::cout<<'\n';
    }
    getch();
}
