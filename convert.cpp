#include<stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

//recheck trim fun
//recheck all functions
int toint(char[]);
void trim(char[]);
double todouble(char[]);

int main(){
	char str[] = " 1234  ",
	sd[] = "2345.895",
	dt[] = "    12. 56  ",
	ns[] = "\n\n0.56  \t3 ";
	printf("%d\n\n", (int)('9' - '0'));
	printf("Number is %lf\n", todouble(sd));
	printf("Number is %d\n", toint(str));
    printf("Number is %lf\n", todouble(dt));
    printf("Number is %lf", todouble(sd));
    puts(sd);
    puts(dt);
	getch();
}
int toint(char s[]){
	trim(s);
	int ret = 0, i = 0;
	while(s[i] != '\0'){
    	if(isspace(s[i])) continue;
		ret  = ret*10 + (int)(s[i++]-'0');
	}
	printf("\n\n--|%s|--\n\n", s);
	return ret;
}

void trim(char s[]){
	int i = -1, n = strlen(s), j =0;
	while(isspace(s[++i]))
		;
	while (i < n) s[j++] = s[i++];
	while(isspace(s[--n])) ;
	s[n+1] = '\0';
}

double todouble(char s[]){
    trim(s);
	double retwhole = 0, retfrac = 0;
	int i = 0;
	while(s[i] != '\0' and s[i] != '.'){
		if(isspace(s[i])) continue;
		retwhole  = retwhole*10 + (int)(s[i++]-'0');
	}
	i++;//ie found a decimal point
	while(s[i] != '\0'){
		retfrac = retfrac/10 + (int)(s[i++]-'0');
	}
	return (retwhole + retfrac);
}




