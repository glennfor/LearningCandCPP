/*Write a program for the following numerical game:
	seed with number b/w 0 and 65535;
The computer stores a random number between 1 and 15 and the player
(user) attempts to guess it.The player has a total of three attempts.After each
wrong guess, the computer tells the user if the number was too high or too low.
If the third attempt is also wrong, the number is output on screen.
The player wins if he or she can guess the number within three attempts.
The player is allowed to repeat the game as often as he or she wants.*/

# include <iostream>
# include <conio.h>
# include <cstdlib>
# include <time.h>
# include <string>
#include <iomanip>

#define HEADER "************Guessing game***********"
using namespace std;
void instructions();
main(){
	cout<<HEADER<<endl;
	instructions();
	cout<<endl<<endl;
	unsigned int ranNum/*random number*/, user_in/*user attempt*/, fail/*unsuccessful attempts*/,
	count=1, i, win=0;
	start:// label to go to
	long seed;
	time(&seed);
	seed%=65535;
	srand((unsigned)seed);
	ranNum=rand()%(15);
	ranNum<=1?++ranNum:ranNum;
	i=1;
		while(i<=3){
			cout<<"\n\nEnter a guess:\n";
			if(cin>>user_in){
				if(user_in==ranNum){
                    cout<<"You got it!!\n\t\t(well after "<<i-1<<" failed attempts)\n"<<'\a'; win+=3;
                    break;
			    	}
				else if(user_in < ranNum) cout<<"Too low:\n";
				else	cout<<"Too high:\n";
			}
			else
				cout<<"Invalid Input\nYou first round has been wasted\n";
			if(i==3)cout<<"\t\tThe number was "<<ranNum<<'\a'<<endl;
			++i;
		}
		string ans;
		cout<<"\nGo again?(yes or no)   ";
		cin>>ans;
		if(ans=="yes" or ans=="Yes" or ans=="YES"){
			++count;
			goto start;
		}
		else{
			cout<<"\n\tRESULTS:\n";
			cout<<"Number of rounds: "<<count<<endl;
			cout<<"Number of  points: "<<win<<" out of "<<3*count;
			cout<<endl<<"Did a great job, See you!!!!";
		}
 getch();
}
void instructions(){
cout<<"\n-The computer stores a random number between 1 and 15 EXCLUSIVE and the player\n\
(user) attempts to guess it.\n-The player has a total of three attempts.\n-After each\
wrong guess, the computer tells the user if the number was too high or too low.\
\n-If the third attempt is also wrong, the number is output on screen.\n\
-The player wins if he or she can guess the number within three attempts.\n\
-The player is allowed to repeat the game as often as he or she wants.\n\
-points=3 per win";
}
