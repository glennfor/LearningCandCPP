#include<stdio.h>
#include<ctype.h>
#include<string.h>


//Get to me if any explanations are needed gn



//all functions are notn tested. 
//try to do so
int find_in(char s[], char c);
//funtion to return characters inn s1 not found in s2
char* disjoint(char s1[], char s2[]){
	char ret[20];int j=0, i=0;
	while(s1[i]){
		if(!find_in(s2, s1[i]))
			ret[j++]=s1[i];
		++i;
	}
//char *ret;int i=0;
//	while(s1[i]){if(!find_in(s2, s1[i]))*ret++=s1[i];++i;
//	}
	return ret;
}

int find_in(char s[], char c){
	int p=0;
	for(;s[p]!='\0'; p++)if(s[p]==c)return 1;
	return 0;
}

int count_words(char sentence[]){
	int i=0, nw=0, state=0;
	for(; sentence[i]!='\0'; ++i)
	{
		if(isspace(sentence[i]) && state==1)

			state=0;

		else if(state==0)
		{	nw++;
			state=1;
		}

	}
	return nw;
}
int main(void){
	char str[200], s1[20], s2[20];
	begin:
	printf("Enter any strings:\n");
	gets(str);
	printf("num_words= %i\n", count_words(str));
	goto begin;
	getch();
}
