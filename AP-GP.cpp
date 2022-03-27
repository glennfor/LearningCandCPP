#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
int main(){
	int s, t, v, m;
	int N;
	float Tn, Snn, Sn, a, d, r, Sif, Gm, Am, p, q;
	printf("This is a program to calculate problems on sequences (progressions)\n");
	printf("                 -------------------------------\n");
	printf("Press\n  1 for problems on Arithmetic progressions\n  2 for problems on Geometric progressions\n");
	getch();
	("(1 2)");
	scanf("%d", &t);
	if(t==1) {
			printf("You have chosen problems on Arithmetic progressions\n            ---------------------------\n");
			printf("Press\n  0 to determine the nth term of a progression\n  1 to determine the positon of a term\n");
			printf("  2 to determine the sum of the first n term\n  3 to find the nth term given sum of the first n terms and sum of the first n-1    terms\n");
			printf("  4 to calculate the arithmetic mean of 2 terms\n\n");
			("(0 1 2 3 4)");
			scanf("%d", &s);
			if(s==0) {
    	            printf("Enter the value of the first term, a\n");
					scanf("%f", &a);
					printf("Enter the value of the common difference, d\n");
					scanf("%f", &d);
					printf("Enter the value of the term position, n\n");
					scanf("%d", &N);
					Tn=a+(N-1)*d;
					printf("\nThe %dth term of the progression is %.2f", N, Tn);
				}
			 else if(s==1){
                    printf("Enter the value of the first term, a\n");
					scanf("%f", &a);
					printf("Enter the value of the common difference, d\n");
					scanf("%f", &d);
					printf("Enter the value of the term, Tn\n");
					scanf("%f", &Tn);
					N=(Tn-a+d)/d;
					printf("\n%.2f occupies the %dth position in the progression", Tn, N);
				}
			 else if(s==2){
                    printf("Enter the value of the first term, a\n");
					scanf("%f", &a);
					printf("Enter the value of the common difference, d\n");
					scanf("%f", &d);
					printf("Enter the value of the term position, n\n");
					scanf("%d", &N);
					Sn=N*(2*a+(N-1)*d)/2;
					printf("\nThe sum of the first %d terms of the progression is %.2f", N, Sn);
				}
			else if(s==3)   {
                    printf("Enter the value of sum of the first n term, Tn\n");
					scanf("%f", &Sn);
					printf("Enter the value of the sum of the preceeding terms, Tn-1\n");
					scanf("%f", &Snn);
					Tn=Sn-Snn;
					printf("\nThe value of the term is %.2f", Tn);
				}
			else if(s==4){
					printf("Entre the 2 terms in order\n");
					scanf("%f%f", &p, &r);
					Am=(p+r)/2;
					printf("\nThe arithmetic mean of %.2f and %.2f is %.2f\n", p, r, Am);
				}
				else{
					printf("\nERROR!!!\n\nRecheck your entries!\n");
                  }}
		  else if(t==2){
            printf("You have chosen problems on Geometric progressions\n                ---------------------------\n");
			printf("Press\n  0 to determine the nth term of a progression\n  1 to determine the positon of a term\n");
			printf("  2 to determine the sum of the first n term\n  3 to find the sum to infinity of all terms of a progression\n");
			printf("  4 to find the geometric mean of 2 trems\n");
			("(0 1 2 3 4)");
			scanf("%d", &v);
			if(v==0) {
				    printf("Enter the value of the first term, a\n");
					scanf("%f", &a);
					printf("Enter the value of the common ratio, r\n");
					scanf("%f", &r);
					printf("Enter the value of the term position, n\n");
					scanf("%d", &N);
					Tn=pow(r,(N-1))*a;
					printf("\nThe %dth term of the progression is %.2f", N, Tn);
				}
			else if(v==1){
                    printf("Enter the value of the first term, a\n");
					scanf("%f", &a);
					printf("Enter the value of the common ratio, r\n");
					scanf("%f", &r);
					printf("Enter the value of the term, Tn\n");
					scanf("%f", &Tn);
					N=round(log10((Tn*r)/a)/log10(r));
					printf("\n%.2f is the %dth term of the progression\n", Tn,N);
				}
			else if(v==2){
                    printf("Enter the value of the first term, a\n");
					scanf("%f", &a);
					printf("Enter the value of the common ratio, r\n");
					scanf("%f", &r);
					printf("Enter the value of the term position, n\n");
					scanf("%d", &N);
					if(abs(r)>=1)
					{
						Sn=(((pow(r,N)-1)*a)/(r-1));
					printf("\nThe sum of the first %d terms of the progression is %.2f", N, Sn);
				    }
				    else
					{
                        Sn=((1-pow(r,N))*a)/(1-r);
					printf("\nThe sum of the first %d terms of the progression is %.2f", N, Sn);
				    }
				}
			else if(v==3){
                    printf("Enter the value of the first term ,a\n");
					scanf("%f", &a);
					printf("Enter the value of the common ratio,r\n");
					scanf("%f", &r);
					if(abs(r)<1){
					Sif=a/(1-r);
					printf("\nThe value of the sum to infinity of the progression is %.2f", Sif);
				        }
				    else{
						printf("\nThe sum to infinity of this sequence does not exist\n");
				    }
				}
			else if(v==4){
					printf("Entre the 2 terms in order\n");
					scanf("%f%f", &p, &r);
					Gm=sqrt(p*r);
					printf("\nThe geometric mean of %.2f and %.2f is %.2f\n", p, q, Gm);
				}
		   else{
                printf("\nERROR!!!\n\nRecheck your entries!\n");
                 }
				 }
	else{
         printf("\nERROR!!!\n\nRecheck your entries!\n");
        }
getch();
return 0;
}
