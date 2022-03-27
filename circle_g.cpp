
#include <graphics.h>
main(){
	initwindow(400,300,"First_sample");
	circle(100,50,40);
	while(!kbhit())
	    delay(200);
}
  
