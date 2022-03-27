#include <iostream>
#include <conio.h>
#include "MACROS.h"

# define GRID_HEIGHT (16)
#define GRID_WIDTH  (20)
main(){
	int counter, i, j;
	GOTOXY(0,5);
	std::cout<<"\t\t";//16 spaces
	for(i=0;i<GRID_WIDTH + 1; ++i)
		std::cout<<"*";// just print line
		//cout<<'-';// just print line  -second choice

	std::cout<<std::endl;
	for( i = 1; i<=GRID_HEIGHT; ++i){
        std::cout << "\t\t";//16 spaces
		for(counter = 0, j = 0; counter< GRID_WIDTH+1, j< GRID_WIDTH + 1; ++counter, ++j){
	        if(i%4){// when i%4!=0 signifying it is not a horizontal line
			      if(counter==((j/5)*5))// making use of integer division truncation in(j/5)
			            std::cout<<"*";//cout<<'|';// just print line  -second choice

			      else std::cout<<' ';

	         }
	    	else std::cout<<"*";//cout<<'-';// just print line  -second choice

		}
		std::cout<<std::endl;
	}
	getch();
}
