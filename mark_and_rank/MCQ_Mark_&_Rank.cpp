/****************************************************************************************
***** MCQ_Mak_&_Rank.cpp*******************************************************************
****************************************************************************************
** AUTHOR:  NFOR JOHN GLENN*****************************************************************
********************************************************************************************
*****************************************************************************************
**PURPOSE:******************************************************************************
	Program designed to make MCQ answers for any number of students annd rank them*************
*****************************************************************************************
***USAGE:*************************************************************************
****Just follow instructions as they come*****************************************
******************************************************************************
*/

//-------------------------->DESIGNED to be very USER-FRIENDLY<--------------------------------

#include <conio.h>// esp for getch()
#include <iostream>//
#include <sstream>// for stringstream()
#include <string>//include string class
#include <cstring>// will deal with C-type strings
#include <cctype>// prototypes of toupper(), functions and others
#include <cstdlib>
#include <algorithm>//for swap()

 using namespace std;
 
 /*##########  using a structure to group student data ############*/

//would use a class when well versed with OOP

struct  Stu_data{
	string name;//student name
	char *response;//student answer sheet
	int failed/*number of questions failed*/, passed/*quesions passed*/;
	int *correct;//correct question numbers
};

//now writing the program proper
#define HEADER "\021\021 PROGRAM TO MARK MCQ's AND RANK STUDENT \020\020\n"

#include <iomanip>//for I/O manipulation
//#include "MACROS.h"
main(){
	Stu_data *classlist;//pointer because number of students are variable
	int questions;//number of questions
	int no_stud;//number of students
	char *key;//markin guide(key)
	string underline(70, '_'), line(40, '-'), buffer_in;
	int j, i, k, p, n;//for indexing etc
	cout<<setw(40)<<HEADER<<underline<<endl;
	cout<<"\nEnter the number of students:\n";
	cin>>buffer_in;//i think its safer to use cin>>buffer_in and later clear the input buffer
	stringstream(buffer_in)>>no_stud;
	cin.sync(), cin.clear();
	cout<<"\nEnter number of questions:\n";
	cin>>buffer_in;
	stringstream(buffer_in)>>questions;
	cin.sync(), cin.clear();
	
	/******************************
	*storage to allocated dynamically for
	   #student--in struct
	     #key                                 NB; No exceptions are thrown
	     #correct--in struct
	     #response--in struct
	 *****************************************/
	classlist=new /*(nothrow) */Stu_data [no_stud];// exception is thrown here::CHECK LATER
	 //classlist=(Stu_data*)malloc(no_stud*sizeof(Stu_data));------C STYLE
	for(int in=0; in < no_stud; ++in){
	     /*C++ alloc style
		 //allocate response to number of quEstions for all student*/
	  (classlist+in)->response=new (nothrow) char [questions];//classlist[in]

	  (classlist+in)->correct=new (nothrow) int [questions];//classlist question assesment

	  }//END FOR

	key=(char*) malloc (questions*(sizeof(char)));//like using C-style sometimes
							 //allocating key to number of questions
	  //checking to see if memory was allocated
	  //check for first student name, key, and correct is enough
	if(classlist==NULL or key==0 or classlist->correct==NULL){
		cout<<endl<<endl;
		cout<<"ERROR!!!!!\n";
		cout<<"\tPROBLEM ALLOCATING MEMORY"<<'\a'<<'\a'<<'\a';//actually "insufficient memory"
		//WAIT(10);
		exit(1);
	  }
	  //if memeory was allocated correctly continue
			//first initialise question assesment arrays for each student to 0
			//not that correct[] will be used to determine which questions are correct

	for(i=0; i < no_stud; i++){
		for(j=0; j < questions; ++j)
			classlist[i].correct[j]=0;
		}/*
			classlist[i].correct[j]=0; is equivalent to
			  1.  (classlist + i)->correct[j]=0;
			  2.   classlist[i].*(correct +j)=0;
			  3.   (classlist + i)->*(correct +j)
		 */
		cout<<underline+'\n';
		cout<<"Enter the marking key:"<<endl;
		for(int count=0; count < questions; ++count){// Get the marking guide
			cout<<setw(2)<<count+1<<".";
			cin >> buffer_in;
			*(key+count)=buffer_in.at(0);// buffer_in[0] and *(key+count)==key[count]
			cin.sync(),cin.clear();
		}
		cin.sync();// clear input buffer and reset
		cin.clear();//  reset any error flags that may have been set
		cout<<setw(40)<<line+'\n'<<"ENTER STUDENT DATA"<<endl<<setw(40)<<line<<endl;
       cout<<"Enter Student Names:\n";
       for(i=0; i < no_stud; ++i){
			cout<<setw(2)<<i+1<<".";
			getline(cin, (classlist+i)->name);//ie classlist[i]->name or (classlist[i].name or
         }                                  //(*(classlist+i)).name
	  cout<<line+'\n'<<"Enter student answers:\n"<<endl;
	  //Getting responses for each student
	  for(i=0; i < no_stud; ++i){
			cout<<i+1<<"."<<(classlist+i)->name<<":"<<endl;
			for(j=0; j < questions; j++){
				cout<<setw(2)<<j+1<<".";
				cin >> buffer_in;
				(classlist + i)->response[j]=buffer_in[0];
				cin.sync(),cin.clear();
			}
	  }
	  cin.sync();// clear input buffer and reset
      cin.clear();//  reset any error flags that may have been set

      /**************************************************************
      *Time to compare student answers against marking guide***********/
      /*CASES comparison
	  1.thesame case(lower-lower or upper-upper)
	  2.lower-upper
	  3.upper-lower
	  */

	  //first of all inialise passed and failed to zero
	  for(i=0; i < no_stud; ++i){
            ((classlist + i)->failed)=0;
           ((classlist + i)->passed)=0;
	  }
	  //COMPARE STUDENT BY STUDENT


	  for(int counter=0; counter < no_stud; ++counter){
			for(int p=0; p < questions; ++p){
				if((classlist+counter)->response[p]==key[p] or
				 (classlist+counter)->response[p]==toupper(key[p])  or
				(classlist+counter)->response[p]==tolower(key[p]) ){
					++((classlist+counter)->passed);// increment number of failed questions
					((classlist+counter)->correct[p])=1; //set the paticular number to correct
				}
				else{
                    ++((classlist+counter)->failed);// increment number of failed questions
					((classlist+counter)->correct[p])=0; //just for precaution::was initialised already
				}//END IF
			}//END FOR
	  }//END FOR

	  /*****************************TIME TO ANALYSE RESULT********************************/
	  cout<<underline<<endl;
	  cout<<endl<<setw(20)<<right<<"RESULT and ANALYSIS"<<endl<<line<<endl;
	  cout<<"Failed=(Number of questions failed)"<<endl<<"Passed=(number of questions failed)"<<endl;
	  cout<<"Total number of questions= "<<questions<<endl<<endl;
	  cout<<"STUDENT NAME\tFAILED\tPASSED\n";
	  for(i=0; i < no_stud; ++i){
			cout<<left<<setw(2)<<i+1<<". "<<left<<setw(16)<<(classlist + i)->name<<setw(10)
			<<(classlist + i)->failed<<setw(10)<<(classlist + i)->passed<<endl;
	  }
	  cout<<underline<<endl;
	  cout<<"QUESTION NUMBERS FAILED\n"<<line + '\n';
	  for(i=0; i < no_stud; ++i){
	     cout<<right<<setw(2)<<i+1<<". "<<(classlist + i)->name<<": ";
	     if(((classlist + i)->passed)==questions)
		    cout<<"NONE";
		 else{
		     for(j=0; j < questions; j++)
		   		 if(!((classlist + i)->correct[j]))
			  		cout<<""<<j+1<<" ,";
    	}
    	cout<<endl;
    }
    cout<<underline<<endl<<"RANKING"<<endl<<line<<endl;
    cout<<"POSITION STUDENT NAME\t MARKS\n";
    int temp; string inter;
	for(p=0; p < no_stud; ++p){
		for(i=p+1; i < no_stud; i++){
			if(((classlist + i)->passed)>((classlist + p)->passed)){
				swap(((classlist + i)->passed), ((classlist + p)->passed));
				swap((classlist + i)->name, ((classlist + p)->name));
			}
		}//end for
	}//end for
	for(p=0; p < no_stud; ++p)
		cout<<left<<setw(9)<<p+1<<setw(16)<<(classlist + p)->name<<" "<<((classlist + p)->passed)<<endl;
  getch();
  if(kbhit()){//memory is deallocated if user presses a key
  /******************FREEING DYNAMICALLY ALLOCATED MEMORY AND ZERO OUT POINTERS***********/
 for (i=0; i < no_stud; ++i){
     //C++  style
  delete [] (classlist + i)->response;//freeing memory
  (classlist + i)->response=0;//zero out pointer
  delete [] (classlist+ i)->correct;
  (classlist + i)->correct=NULL;//zero out

  }//END FOR

  delete [] classlist;// c++ styrle:free memory and
  classlist=NULL;//zero out pinter for precaaution in case it is mistakenly used again during
                //program extension

  //C style
  free(key);//like using C-style sometimes
  key=0;
}
}


/*UNFORTUNATELY THIS PROGRAM USES MORE MEMORY THAN THE PREVIOUS eg
		=correct[], response[]  WAS FOR ALL : NOW EACH STUDENT HAS*/
