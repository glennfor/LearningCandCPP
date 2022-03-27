
#include<conio.h>

#include<iostream>

/**********************************************
**PROGRAM TO PRINT AN 8-BY-8 GRID CHECKBOARD**
***********************************************/

using namespace std;
main(){
# define GRID_HEIGHT (32)
#define GRID_WIDTH  (40)

int height[GRID_HEIGHT], width[GRID_WIDTH], counter, i, j;

for(i=0;i<GRID_WIDTH + 1; ++i)
cout<<'-';// just print line
cout<<endl;
for( i = 1; i<=GRID_HEIGHT; ++i){
	for(counter = 0, j = 0; counter< GRID_WIDTH+1, j< GRID_WIDTH + 1; ++counter, ++j){
        if(i%4){// when i%4!=0 signifying it is not a horizontal line
		      if(counter==((j/5)*5))// making use of integer division truncation in(j/5)
		            cout<<'|';
		      else cout<<' ';
         }
    	else cout<<'-';
	}
	cout<<endl;
}
getch();
}
