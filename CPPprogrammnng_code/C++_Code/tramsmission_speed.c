 /*A serial transmission line can transmit 960 characters a second. Write a
program that will calculate how long it will take to send a file, given the file's size.
 Try it on a 400MB (419,430,400 byte) file. Use appropriate units. (A 400MB file takes days.)*/
 
//<<modify later to get input of speed>>------------------------------
 #include<stdio.h>
 #include <conio.h>
 #include <stdlib.h>
  const float SPEED=960;// 960 bytes per second
  main(){
		float size, byte_size, time, time_dif/*for the fractional part of the time*/;
		long minutes, hours, days, seconds, tot_time, rem_t;
		printf("PROGRAM TO COMPUTE TRANSMISSION TIME OF A FILE\n\n");
		printf("TRANSMISSION SPEED= 960 BYTES PER SECOND\n\n");
		printf("Enter the size of the file in MegaBytes:\n");
		scanf("%f", &size);
		byte_size=size*1024*1024;//SIZE IN BYTES
		
		time=byte_size/SPEED;//time in seconds
		
        tot_time=(int)time;
        
        time_dif=time-tot_time;//fractional part of time
        
		days=tot_time/(24*3600);
		rem_t=time-(days*24*3600);
		hours=rem_t/(3600);
		rem_t-=hours*3600;
		minutes=rem_t/60;
		seconds=rem_t-=minutes*60;
		printf("SIZE IN BYTES:%.0f\n\nTIME IN SECONDS:%.1f\n",byte_size, time);
		printf("\n\nTOTAL TIME:\n\n");
		printf("%d days, %d hours, %d minutes, %.1f seconds\n\n"
		, days,hours, minutes,seconds+time_dif);
		getch();
  }
