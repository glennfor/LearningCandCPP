
/*
Exercise 9-1: Write a procedure that counts the number of words in a string. (Your
documentation should describe exactly how you define a word.) Write a program to test your
new procedure.

Exercise 9-2: Write a function "begins (string1, string2)" that returns true if
string1 begins string2. Write a program to test the function.

Exercise 9-3: Write a function count (number, array, length) that will count the
number of times number appears in array. The array has length elements. The function
should be recursive. Write a test program to go with the function.

Exercise 9-4: Write a function that will take a character string and return a primitive hash
code by adding up the value of each character in the string.

Exercise 9-5: Write a function that returns the maximum value of an array of numbers.

Exercise 9-6: Write a function that scans a string for the character "-" and replaces it with
"_".
*/

# include <iostream>
# include <conio.h>
# include <stdio.h>
# include <cstring>

//max of any type
#define themaxim(a, b)  ((a)>(b)?a:b)

//swap values of any type
#define swap(x,y)  (x=x+y, y=x-y, x=x-y)


using namespace std;
//can modify fxn to take 3 arg repace(char[], char c, char b) to replace all c with b\
void replace(char[]);//replace hyphen('-') with underscore("_")

int hash(char[]); //returns sum of ascii value of all characters in the string

int maxim(int[], int);// returns maximum of elements of an array

int word_count(char[]);//counts number of words in a string

bool begins(char[], char[]);//returns true if second string begins first string

int count(int , int[], int);//count number of times a number occurs in an array

void reverse(char[]);//reverses a string

/***********************************************************
**********ACTUAL IMPLEMENTATION OF THE FUNCTIONS************
************************************************************/

void replace(char s[]){
	for(int i=0; s[i]!='\0'; ++i){
		if(s[i]=='-')
		s[i]='_';
	}
}

//returns primitive hash code : sum of the ascii values of all elements of the string
int hash(char str[]){// check why not simply: hash(str[])
	int i, hash_code=0;
	for(i=0; str[i]!='\0'; ++i){
		hash_code+=(int)str[i];
	}
	return (hash_code);
}

int count(int number, int arr[], int length){//length is the array size e.g arr[5], length ==5;
	// number of times number appears in arr with length length
	int count=0, i=0/*i is the indexing variable*/;
	while(i<length){
		if(arr[i++]==number)
		   ++count;
	}
	return (count);
}

//update function to consider newline as a potential word separator
int word_count(char strn[]){//rewrite
	int counter=0, /*to count words*/ i=0 /*indexing*/;
	while(strn[i]!='\0'){
		if((strn[i]==' ' or strn[i]=='\t' )and (strn[i+1]!=' ' or strn[i+1]!='\t'))
			++counter;
	    ++i;
	}
	if((strn[0]=='\t' or strn[0]==' ') and(strn[i]!=' ' or strn[i]!='\t'))
		return (counter-1);
	else if((strn[0]=='\t' or strn[0]==' ') and(strn[i]==' ' or strn[i]=='\t'))
	    return (counter-2);
	else if((strn[0]!='\t' or strn[0]!=' ') and (strn[i]==' ' or strn[i]=='\t'))
		return counter-1;
	else
		return counter;
}

//returns true if second string begins first string
/*bool begins(char str1[], char str2[]){
	for(int i=0; i<strlen(str2); ++i)
		if(str1[i]!=str2[i])
			return false;
  return true;
}*/
bool begins(char str1[], char str2[]){
	int i1=0;//indexing first string
	int i2=0;//indexing second string
	int count=0;//comparing the two strings
	for(; str1[i1]!='\0' ; ++i1);
	for( ; str2[i2]!='\0'; ++i2);//length of second string
	if(i2>i1)
		return false;
	else{
        int *counter=new (nothrow)int[i2];// to test equality of individual charaters of the
        //two strings
		//taking the length of second string to compare
	//	*counter=0;
		while(count<i2){
			if(str1[count]==str2[count])
		        counter[count]=1;
			else counter[count]=0;
			++count;
		}
		bool decide=true;//set to true
		for(int y=0; y<=i2; ++y){// looping through to see if any elements of the string was
		// unmatched
			if(counter[y]==0){
				decide=false;
				break;
				}
		}
		return decide;
	}
}


//program to return largest element of an array

int maxim(int arr[], int size){// size is same as length in count above
	 int max=arr[0];
	 for(int i=0; i < size ;++i){
			if(arr[i]>max)
            max=arr[i];
	 }
	 return max;
}

//program to
void sort(int arr[], int size){//rewrite
	int i, j;
	for(i=0;i<size;++i){
		for(j=0;j<size-i-1;++j){
			if(arr[j]>arr[j+1]){
				int te=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=te;
			}
		}
	}
}

//program to reverse a string of characters
void reverse(char s[]){
	int len=strlen(s);
	for(int i=0;i<len;++i ){
		char t=s[i];
		s[i]=s[--len];
		s[len]=t;
		swap(s[i], s[--len]);
	}
}
//TESTING FUNCTIONS IN MAIN()

main(){
	int array[10]={0, 0, 34, 90, 0, 12, 9, 8, 56, 120};//try count, maxim
	char str[50]=" THIS IS MY SCHOOL 	RIGHT HERE\n",/*str[]{whatever}*/
	 trial[]="ABCDEF";//try wordcount, hash
	char trp[]="Un -superscript-ted --text--";//try replace
	char first[]="HELLO, WORLD", second[]="HELLO,", other[]="hello, there";//try begins
	for(int i=0; i<10; ++i){
		cout<<array[i]<<"  ";
	}
	cout<<endl;
	cout<<"Maximum:"<<maxim(array,10)<<endl;
	cout<<"0 appears:"<<count(0, array, 10)<<endl;
	cout<<"HASHCODE:(A-F):"<<hash(trial)<<endl<<endl;
	cout<<trp;
	replace(trp);// calling the function replace
	reverse (trial);
	cout<<"\n\n"<<trp<<'\t'<<trial<<endl<<endl;
	cout<<begins(first, second)<<"\t\t"<<begins(first, other)<<endl;
	cout<<word_count(str)<<"\n\n";
	
	sort(array, 10);
	for(int y=0;y<10; ++y)
	cout<<(array[y])<<" ";
	getch();
}
