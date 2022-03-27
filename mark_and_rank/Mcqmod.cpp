#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<cstring>
#include <string>

//MAKE USE OF stringstream() in many implementations to mininmize Errors
/*


MAKE A NEW AND EFFICIENT EDITION

additional :: after marking it ranks the students


*/
#include<iostream>
#define OR ||
using namespace std;
int main(){
    string *sname;
	int Stud, questions;
	 int passed=0, failed=0, *correct;
	 char *key;// Marking guide
	 char *response;//Student answr sheet
	 printf("###Program to Mark MCQs****\n");
	 printf("\nEnter the number of students:\n");
	 scanf("%d", &Stud);
	 printf("\nEnter number of questions:\n");
	 scanf("%d", &questions);
	 
	 correct=(int*)malloc(questions*sizeof(int));
	 sname=new (nothrow) string[Stud];
	 key=new (nothrow) char [questions];
	 response=new (nothrow) char [questions];
	 
	 for(int in=0; in < questions; ++in)
	 *(correct + in)=0;//setting all values to 0
	 
	 if(key==0 OR response==0 OR sname==0 ){
			printf("\n\nERROR:\n\nPROBLEM WITH MEMORY ALLOCATION\n\n");
			//mainly due to insufficient meory
	 }
	 else{
	 printf("\nEnter the Marking key:\n");
	 for(int i=0;i<questions;i++){
			printf("%2d.", i+1);
			scanf("%s", &key[i]);
	 }
	 cin.sync(); cin.clear();
	 for(int j=0;j<Stud;j++){
			printf("\nEnter student Name:\n");
            getline(cin, sname[j]);//could use gets(sname[j]) but for compatibility's sake
			cout<<"\nEnter Answers of "<<sname[j]<<":"<<endl;
			for(int k=0;k<questions;k++){
				printf("%2d.", k+1);
				scanf("%s", &response[k]);
			}/**************
			*might have to convert key and response to integers before comparison
			******************************
			**sugestion 2:
				*
				*	(char)toupper(key[2]);  :::check this out
			*/
			

			for( int p=0; p<questions; ++p){
			    if((int)key[p]==(int)response[p] or (int)key[p]==(int)(response[p]+32) or
			        (int)key[p]==(int)(response[p]-32)) {
						++passed;
						correct[p]=1;
			        }
			    else{ ++failed; correct[p]=0;//just for precaution b/c i noticed some
			                                 //abnormalities during execution
			    }
			}
			/*
			*first part: both of the same case
			*second part: key[p] is lowercase and response[p] is uppercase(ie 97(a)-65(A))
			*third part: key[p] is uppercase and response[p] is lowercase
			*
			*
			*/
		/*	for(int p=0;p<questions;p++){
				if(key[p]==response[p]){// take care of diferrences in cases
					++passed;           //Modify to do so
				}
				else ++failed;
			}*/
			cin.clear();// reset error flags
			cin.sync();// clear the buffer
			cout<<endl<<sname[j];
			printf(":\nNumber of questions passed:");
			cout<<passed<<" out of "<<questions<<endl;
			cout<<"Number of questions failed:"<<failed<<" out of "<<questions<<endl;
			cout<<"Question Numbers failed: ";
				for(int p=0;p<questions;p++){
				if(!correct[p])
					printf("%d, ", p+1);
			    }
			    #define AND &&
				if(failed==0 AND passed==questions)
				printf(" NONE");
			failed=0; passed=0;//reinitialising to use for next operation
			printf("\n\t___________________________________________________________________\n\n");
	 }
	 free(correct); correct = NULL;
	 delete [] sname; sname=0;//zero out pointers just for precaution in case they are later
	 delete [] response;  response=NULL;      //used if the program is extended
	 delete [] key;   key=NULL;
	}
cout<<endl<<endl<<"Press any key to EXIT...\n\n";
getch();
}
