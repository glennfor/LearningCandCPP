#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
 main()
{
	//clrscr();
 int gm=DETECT,gd;
 initgraph(&gm,&gd,"c:/tc/bgi");
	circle(150,150,50);//face circle
	setfillstyle(1,YELLOW);
	floodfill(150,150,WHITE);
	circle(125,140,7);//eye 1 circle
	setfillstyle(1,RED);
	floodfill(125,140,WHITE);
	circle(175,140,7);//eye 2 circle
	setfillstyle(1,RED);
	floodfill(175,140,WHITE);
	setcolor(BLACK);
	arc(150,160,180,360,17);//smile
	arc(150,161,180,360,17);
	arc(150,162,180,360,17);
	getch();
	closegraph();
}
