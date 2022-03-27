#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<iostream>
#include<stdlib.h>
	/*
	For motion, if motion, vectors, well vec, e.t.c: NOTE:
		Anlgle in degrees=(180/Pi)*angle in radians

		Angle in radians=(Pi/180)*angle in degrees

		Pi==3.141592654
	*/
int main(){
	int A, B, C, D, T, S, V, U, K, F, Q, X, R, J, H, yup;
	const float g = 9.81;
	const double Pi = 3.141592654;
	float Vvpm, max_hv, Tof, tvpm, Tvpm, G,
	DAngle, Range,
	Rangey, Rgiven, Xgiven, Rangex, Rmax, Vrm, Vff, Tff, max_S, Vapm,
	Urm, Uapm, Trm, Tapm,
	Tmax, Tgiven, Ttotal, Ux, Uy, Arm, Srm,
	max_h, Dis, rootD, First_root, Second_root,
	Angle=DAngle*(Pi/180);

	/*
********THIS PROGRAM HAS A LOT OF MISTAKES NOT SYNTAX OR ANY OF THE STUFF BUT
********ITS FORMULAS ARE FAULTY IN MANY CASES
****pprogram is unecessarily bulky . have to optimise

###########@@@CHECK OUT WHEN I HAVE TIME
	*/
	printf("This program solves problems concerning Motion.\n");
	printf("N.B:\n  For calculations involving g, g = 9.81m/s\xfd.\n");
	printf("Please, enter the following values as required;\n");
	start:
	printf("         -------------------------------\nChoose type of motion\nPress\n  1 for rectilinear motion\n  2 for Angular Projectile motion\n  3 for Free fall\n  4 for Vertical projectile motion\n ");
	("(1 2 3 4)");
	scanf("%d", &A);
	if(A==1)
	{
			printf("Enter the quantity to calculate\nPress\n  1 for Average Velocity\n  2 for Acceleration\n  3 for Total time taken\n  4 for Total displacement\n");
            ("(1 2 3 4)");
			scanf("%d", &B);
			if (B==1)
			{
					printf("Does your data involve time or displacement?\nPress\n  4 if time is involved\n  5 if displacement is involved\n");
					("(4 5)");
					scanf("%d", &T);
					if(T==4)
					   {
							printf("Enter the initial velocity\n");
							scanf("%f", &Urm);
							printf("Enter the acceleration\n");
							scanf("%f", &Arm);
							printf("Enter the time\n");
							scanf("%f", &Trm);
							Vrm=Urm+(Arm*Trm);
							printf("The Average velocity is %.2f m/s\n", Vrm);
							printf("\n\n");
						}
					 else if(T==5)
					      {
							printf("Enter the initial velocity\n");
							scanf("%f", &Urm);
							printf("Enter the displacement\n");
							scanf("%f", &Srm);
							printf("Enter the acceleration\n");
							scanf("%f", &Arm);
							Vrm=sqrt((Urm*Urm)+2*Arm*Srm);
							printf("The Average velocity is %.2f m/s\n", Vrm);
							printf("\n\n");
						}
					 else  {
				        	printf("ERROR!!!\n    Please check your entries again\n");
							goto start;
							}
						}
				else if(B==2)
				       {
                             printf("Does your data involve time or displacement?\nPress\n  5 if time is involved\n  6 if displacement is involved\n");
					        ("(5 6)");
				            scanf("%d", &S);
				    if(S==5)
					    {
							printf("Enter the initial velocity\n");
							scanf("%f", &Urm);
							printf("Enter the final velocity\n");
							scanf("%f", &Vrm);
							printf("Enter the time\n");
							scanf("%f", &Trm);
							Arm=(Vrm-Urm)/Trm;
							printf("The Acceleration is %.2f m/s^2\n", Arm);
							}
						else if(S==6){
							printf("Enter the initial velocity\n");
							scanf("%f", &Urm);
							printf("Enter the displacement\n");
							scanf("%f", &Srm);
							printf("Enter the final velocity\n");
							scanf("%f", &Vrm);
							Arm=sqrt((Vrm*Vrm-Urm*Urm)+2*Srm);
							printf("The Acceleration is %.2f m/s^2\n\n", Arm);
							}
						else
					     	{
							printf("ERROR!!!\n     Please check your entries again\n\n");
							goto start;
						    }
						  }
				else if(B==3)
				      {
                      printf("Does your data involve final velocity or displacement?\nPress\n  6 if velocity is involved\n  7 if displacement is involved\n");
					("(6 7)");
				    scanf("%d", &U);
					if(U==6)
					{
                            printf("Enter the initial velocity\n");
							scanf("%f", &Urm);
							printf("Enter the final velocity\n");
							scanf("%f", &Vrm);
							printf("Enter the acceleration\n");
							scanf("%f", &Arm);
							Trm=(Vrm-Urm)/Arm;
							printf("The Total time taken is %.2f seconds\n", Trm);
							printf("\n\n");
						}
					  else if(U==7)
					  {
							//printf("The time is calculated using the quadratic formula\n");
							//ie: s=ut+ 1/2 at^2;---at^2+2ut-2s=0;
                            printf("Enter the acceleration\n");
                            scanf("%f", &Arm);
                            printf("Enter the initial velocity\n");
                            scanf("%f", &Urm);
                            printf("Enter the displacement\n");
                            scanf("%f", &Srm);
                            Dis=2*2*Urm*Urm-(4*Arm*-2*Srm);// D is the discriminant, b^2-4ac; determines nature of roots
                            rootD=sqrt(Dis);// That is squareroot of b^2-4ac
                            if (rootD>0)
                             {
                                  First_root=(-2*Urm+rootD)/2*Arm;
                                  printf("THE first possible time is %d\n", First_root);
                                  Second_root=(-2*Urm-rootD)/2*Arm;
                                  printf("The second possible time is %d\n", Second_root);
                                  printf("Hence, the time taken is either %.2f  or %.2f seconds\n", First_root, Second_root);
                             }
                              else if (rootD==0)
                              {
                              First_root=Second_root=-2*Urm/(2*Arm);
                              printf("The time taken is %.2f seconds\n",First_root);
                              }
                            else
                             {
									printf("ERROR!!!\n    Please check your entries again\n");
                                 // printf("The time is complex, hence it is undefined in the set of real numbers\n");
								  goto start;
                            }
						}
					   else{
                            printf("ERROR!!!\n    Please check your entries again\n");
							printf("\n\n");
							goto start;
						}
                       getch();
					   }
				else if(B==4)
				{
                     printf("Does your data involve time or final velocity?\nPress\n  0 if time is involved\n  1 if final velocity is involved\n");
					("(0 1)");
				    scanf("%d", &V);
					if(V==0)
					{
							printf("Enter the initial velocity\n");
							scanf("%f", &Urm);
							printf("Enter the acceleration\n");
							scanf("%f", &Arm);
							printf("Enter the time\n");
							scanf("%f", &Trm);
							Srm=(Urm*Trm)+(Trm*Trm*Arm)/2;
							printf("The Displacement is %.2f metres\n", Srm);
							printf("\n\n");
						}
						else if(V==1)
                               {
							printf("Enter the initial velocity\n");
							scanf("%f", &Urm);
							printf("Enter the acceleration\n");
							scanf("%f", &Arm);
							printf("Enter the final velocity\n");
							scanf("%f", &Vrm);
							Srm=(Vrm*Vrm-Urm*Urm)/(2*Arm);
							printf("The Displacement is %.2f metres\n", Srm);
							printf("\n\n");
							}
						else{
                             printf("ERROR!!!\n    Please check your entries again\n");
							printf("\n\n");
							goto start;
							}
                                }
				else{
				     	printf("ERROR!!!\n    Please check your entries again\n");
					    printf("\n\n");
					    goto start;
                        getch();
						}
						}
		else if(A==2)
		{
			printf("Enter the quantity to calculate\nPress\n  1 to resolve an initial velocity at angle into its horizontal and vertical     components\n\n  2 to calculate maximum height attained by a projected body at an angle\n\n  3 to caculate the time taken to attain the maximum height\n\n  4 to calculate the time taken to return to the level of projection\n\n  5 to calculate the Range or horizontal distance covered by body\n\n");
			printf("  6 to get the greatest possible range of the body\n\n  7 to calculate the total horizontal distance covered after a given length\n    of time\n\n  8 to calculate the total vertical distance covered after a certain length\n    of time\n\n  9 to find the initial velocity given its horizontal and vertical components\n\n  0 to find the vertical distance covered given the horizontal distance, initial    velocity and angle of projection\n\n  00 to find the horizontal distance covered given the vertical distance, \n  initial    velocity and angle of projection\n\n");
			("(1 2 3 4 5 6 7 8 9 0 00)");
			scanf("%d", &R);
			if(R==1)
			{
					printf("Enter the value of the initial velocity\n");
					scanf("%f", &Uapm);
					printf("The angle of projection\n");
					scanf("%f", &DAngle);
					Angle=DAngle*(Pi/180);
					Ux=cos(Angle)*Uapm;
					Uy=sin(Angle)*Uapm;
					printf("%.2f m/s = (%.2fi + %.2fj) m/s\n", Uapm, Ux, Uy);
				}
			else if(R==2)
			{
					printf("Enter the initial velocity\n");
					scanf("%f", &Uapm);
					printf("Enter the angle of projection\n");
					scanf("%f", &DAngle);
					Angle=DAngle*(Pi/180);
					max_h=((sin(Angle)*sin(Angle)*Uapm*Uapm))/(2*g);
					printf("The maximum height attained is %.2f metres\n", max_h);
			    	}
			else if(R==3)
			{
                    printf("Enter the initial velocity\n");
					scanf("%f", &Uapm);
					printf("Enter the angle of projection\n");
					scanf("%f", &DAngle);
					Angle=DAngle*(Pi/180);
					Tmax=(sin(Angle)*Uapm)/g;
					printf("The time taken to attain maximum height is %.2f seconds\n", Tmax);
				}
			else if(R==4)
			{
                    printf("Enter the initial velocity\n");
					scanf("%f", &Uapm);
					printf("Enter the angle of projection\n");
					scanf("%f", &DAngle);
                    Angle=DAngle*(Pi/180);
					Tmax=(sin(Angle)*Uapm)/g;
					Ttotal=2*Tmax;
					printf("The time taken to return to level of projection(time of flight) is %.2f seconds\n", Ttotal);
				}
			else if(R==5)
			{
                    printf("Enter the initial velocity\n");
					scanf("%f", &Uapm);
					printf("Enter the angle of projection\n");
					scanf("%f", &DAngle);
					Angle=DAngle*(Pi/180);
					Range=(sin(2*Angle)*Uapm*Uapm)/g;
					printf("The Range (horizontal distance covered) is %.2f metres\n", Range);
				}
			else if(R==6)
			{
                    printf("Enter the initial velocity\n");
					scanf("%f", &Uapm);
					printf("Enter the angle of projection\n");
					scanf("%f", &DAngle);
					Rmax=(Uapm*Uapm)/g;
					printf("The Range (horizontal distance coverable with this initial velocity) is %.2f metres\n", Rmax);printf("To obtain the maximum range, the angle of projection must be equal to 45 degrees\n");
				}
			else if(R==7)
			{
                    printf("Enter the initial velocity\n");
					scanf("%f", &Uapm);
					printf("Enter the angle of projection\n");
					scanf("%f", &DAngle);
					printf("Enter the given time \n");
					scanf("%f", &Tgiven);
					Rangey=cos(Angle)*Uapm*Tgiven;
					printf("The horizontal distance covered after %.2f seconds is %.2f metres\n", Tgiven, Rangey);
				}
			else if(R==8)
			{
                    printf("Enter the initial velocity\n");
					scanf("%f", &Uapm);
					printf("Enter the angle of projection\n");
					scanf("%f", &DAngle);
					printf("Enter the given time \n");
					scanf("%f", &Tgiven);
					Rangex=(sin(Angle)*Uapm*Tgiven)-(g*Tgiven*Tgiven)/2;
					printf("The vertical distance covered after %.2f seconds is %.2f metres\n", Tgiven, Rangex);
				}
			else if(R==9)
			{
                    printf("Enter the horizontal component\n");
					scanf("%f", &Ux);
					printf("Enter the vertical component\n");
					scanf("%f", &Uy);
					Uapm=sqrt(Ux*Ux+Uy*Uy);
					printf("The initial velocity is %.2f m/s\n", Uapm);
				}
			else if(R==0)
			{
                    printf("Enter Angle of projection\n");
                    scanf("%f", &DAngle);
                     printf("Enter the initial velocity\n");
					scanf("%f", &Uapm);
					printf("Enter the horizontal distance\n");
					scanf("%f", &Rgiven);
                    Dis=tan(Angle)*tan(Angle)+(4*Rgiven*g)/2*Uapm*Uapm*cos(Angle)*cos(Angle);
                    rootD=sqrt(Dis);
                      if (rootD>0)
                       {
                    First_root=(-1*tan(Angle)+rootD)/2*(-g/2*Uapm*Uapm*cos(Angle)*cos(Angle));
                    Second_root=(-1*tan(Angle)-rootD)/2*(-g/2*Uapm*Uapm*cos(Angle)*cos(Angle));
                        printf("The vertical distance is either %.2f or %.2f metres",First_root,Second_root);
                      }
                      else if (rootD==0)
                             {
                     First_root=Second_root=-1*tan(Angle)/(2*(-g/(2*Uapm*Uapm*cos(Angle)*cos(Angle))));
                     printf("The vertical distance is %.2f metres\n",First_root);
                            }
                      else
                       {
                        printf("Recheck values\n\n");
                        goto start;
                       }
				}
            else if(R==00)
			{
                     printf("Enter Angle of projection\n");
                    scanf("%f", &DAngle);
                     printf("Enter the initial velocity\n");
					scanf("%f", &Uapm);
					printf("Enter the vertical distance\n");
					scanf("%f", &Xgiven);
					Rgiven=tan(Angle)*Xgiven-(g*Xgiven*Xgiven/2*Uapm*Uapm*cos(Angle)*cos(Angle));
					printf("The horizontal distance is %.2f metres\n", Rgiven);
				}
			else
             	{
                     printf("ERROR!!!\n    Please check your entries again\n");
							printf("\n\n");
							goto start;
              }
			}
        else if(A==3)
		{
				printf("N.B.\nFree fall is a form of rectilinear motion with special characteristics\n");
				printf("Here, the initial velocity is always 0, and also it is worth noting that\ndisplacement(S) is the same as height(h)\n           ---------------------------------\n");
				printf("Press\n  1 to calculate displacement\n  2 to calculate final velocity\n  3 to calculate acceleration due to gravity\n");
				printf("  4 to calculate itme taken to reach maximum displacement and time of flight\n");
				("(1 2 3 4)");
				scanf("%d", &F);
				if(F==1)
				{
						printf("Does your data involve velocity or time?\nPress\n  1 if velocity is involved\n  2 if time is involved\n");
						("(1 2)");
						scanf("%d", &Q);
						if(Q==1)
						{
								printf("Enter the final velocity\n");
								scanf("%f", &Vff);
								max_S=Vff*Vff/(2*g);
								printf("The Total displacement is %.2f m/s\n", max_S );
								}
						else if(Q==2)
						{
                                printf("Enter the Total time taken\n");
								scanf("%f", &Tff);
								max_S=g*Tff*Tff/2;
								printf("The Total displacement is %.2f m/s\n", max_S );
							}
						else
						{
                                 printf("ERROR!!!\n    Please check your entries again\n");
							printf("\n\n");
							goto start;
						}
						}
				else if(F==2)
				{
                        printf("Does your data involve displacement or time?\nPress\n  1 if displacement is involved\n  2 if time is involved\n");
						("(1 2)");
						scanf("%d", &J);
						if(J==1)
						{
								printf("Enter the displacement\n");
								scanf("%f", &max_S);
								Vff=sqrt(2*g*max_S);
								printf("The final velocity is %.2f m/s\n", Vff);
							}
						else if(J==2){
                                printf("Enter the Total time taken\n");
								scanf("%f", &Tff);
								Vff=g*Tff;
								printf("The final velocity is %.2f m/s\n", Vff);
							}
                         else
						 {
                                 printf("ERROR!!!\n    Please check your entries again\n");
							printf("\n\n");
							goto start;
						}
						}
				else if(F==3)
				{
                        printf("Does your data involve velocity or time?\nPress\n  1 if velocityt is involved\n  2 if time is involved\n");
						("(1 2)");
						scanf("%d", &X);
						if(X==1)
						{
								printf("Enter the displacement(height)\n");
								scanf("%f", &max_S);
								printf("Enter the final velocity\n");
								scanf("%f", &Vff);
								G=Vff*Vff/max_S;
								printf("The Acceleration duen to gravity is %.2f m/s^2\n", G);
							}
						else if(X==2)
						{
                                printf("Enter the Total time taken\n");
								scanf("%f", &Tff);
								printf("Enter the displacement\n");
								scanf("%f", &max_S);
								G=(2*max_S)/Tff*Tff;
                                printf("The Acceleration duen to gravity is %.2f m/s^2\n", G);
							}
						else
						{
                                printf("ERROR!!!\n    Please check your entries again\n");
							    printf("\n\n");
							    goto start;
							   }
							   }
					else if(F==4)
					{
							printf("Does your data involve velocity or displacement\n");
							printf("Press\n  1 if  velocity is involved\n  2 if displacementis involved\n");
                            ("(1 2)");
                            scanf("%d", &H);
                            if(H==1)
							{
									printf("Enter the final velocity\n");
									scanf("%f", &Vff);
									Tff=Vff/g;
									printf("The total time taken is %.2f seconds\n", Tff);
								}
							else if(H==2)
							{
									printf("Enter the total displacement\n");
									scanf("%f", &max_S);
									Tff=sqrt(2*max_S/g);
									printf("The total time taken is %.2f seconds\n", Tff);
								}
							else
							{
                                 printf("ERROR!!!\n    Please check your entries again\n");
							printf("\n\n");
							goto start;
					     	}
							 }
					else
					{
                                 printf("ERROR!!!\n    Please check your entries again\n");
							printf("\n\n");
							goto start;
							getch();
			  	     }
			  	     getch();
					   }
		else if(A==4)
		{
			printf("You have chosen calculations concerning Vertical projectile motion.\n        -------------------------\n");
			printf("N.B.\n");
			printf(" -At maximum height final velocity is 0\n -When body returns to level of projection, total displacement is 0\n     ---------------------------------\n");
			printf("Press\n  1 to calculate the maximum displacement\n  2 to calculate initial velocity");
			printf("\n  3 to calculate time to reach maximum height\n  4 to calculate time to return to level(here, point) of projection\n    (time of flight)\n");
			printf("  5 to calculate time taken to reach a certain given displacement when the\n    initial velocity is given\n");
			("(1 2 3 4 5)");
			scanf("%d", &K);
			if(K==1)
			{
                    printf("Enter the initial velocity\n");
					scanf("%f", &Vvpm);
					max_hv=Vvpm*Vvpm/(2*g);
					printf("The Maximum height attained is %.2f m/s\n", max_hv );
				}
			else if(K==2)
			{
                    	printf("Enter the maximum height attained\n");
						scanf("%f", &max_hv);
						Vvpm=sqrt(2*g*max_hv);
						printf("The initial velocity is %.2f m/s\n", Vvpm);
					}
			else if(K==3)
			{
                    	printf("Enter the final velocity\n");
                        scanf("%f", &Vvpm);
						tvpm=Vvpm/g;
						printf("The total time taken  is %.2f seconds \n", tvpm);
					}
			else if(K==4)
			{
                    printf("Enter the final velocity\n");
                        scanf("%f", &Vvpm);
						tvpm=Vvpm/g; Tvpm=2*tvpm;
						printf("The total time of flight  %.2f seconds is \n", Tvpm);
					}
			else if(K==5)
			{
					    //printf("Here, the time is obtained using the quadratic\n");
					    printf("Enter the final velocity\n");
                        scanf("%f", &Vvpm);
                        printf("Enter the total displacement\n");
                        scanf("%f", &max_hv);
                        Dis=Vvpm*Vvpm-(4*(g/2)*max_hv);
                        rootD=sqrt(Dis);
                        if (Dis>0)
                        {
                        First_root=(-1*Vvpm+rootD)/(-1*g);
                        Second_root=(-1*Vvpm-rootD)/(-1*g);
                        printf("The time taken is either %.2f seconds or %.2f seconds",First_root,Second_root);
                        }
                        else if (Dis==0)
                           {
							First_root=Second_root=(-1*Vvpm)/(-1*g);
                            printf("The time taken is %.2f seconds\n", First_root);
                           }
                        else
                           {
                             printf("The time taken is undefined\t Recheck your values\n");
                             printf("\n\n");
                             goto start;
                             getch();
                           }
					}
				else
				{
                        printf("ERROR!!!\n    Please check your entries again\n");
							printf("\n\n");
							goto start;
							getch();
                       }
                       getch();
					   }
	   else
	   {
                 printf("ERROR!!!\n    Please check your entries again\n\n\n");
							goto start;
       }
       begin:
       printf("\n\n-----------------------\t\t\t\t-------------------\n");
       printf("||Press 45 to restart||\t\t\t\t||Press 13 to stop||\n");
       printf("-----------------------\t\t\t\t-------------------\n");
       scanf("%d", &yup);
       if(yup==45)
       goto start;
       else if(yup==13)
	   goto stop;
	   else
	   goto begin;
getch();
return 0;
stop:;
printf("\nEXITING....\n\nPRESS ANY KEY TO EXIT...\n");
//system("pause");
getch();
}
