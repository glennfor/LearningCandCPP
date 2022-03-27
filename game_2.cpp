# include <iostream>
# include <conio.h>
# include <cstdlib>
# include <ctime>
# include <string>
#include<cstring>
#include <iomanip>//winning code(201)

#define HEADER "\335 GAME: Rock, Paper, Scissors \335"
using namespace std;
void game_set();
void result(int, int, short);
short decide(int, int);
short win_C=0, win_Y=0, stray=0;;

main(){
	const string line2(31, '\334');
	cout<<HEADER<<endl<<line2 + '\n' <<endl<<"RULES\n-------\n";
	game_set();
	cout<<endl;
	unsigned int ranNum/*random number*/, user_in/*user attempt*/, fail/*unsuccessful attempts*/,
	count=0, rounds=0;
	char ans;//initialised with stray value to render later expression false
	string line(40, '-');
	char name[20];;
	long seed;
	cout<<"\nEnter your name:\n";
	cin.getline(name, 20);
	strcpy(name, strupr(name));
	cin.sync(), cin.clear();
	do{
        ans='p';
		cout<<"\nROUND "<<++rounds<<":"<<endl;
		while(count <3){
			cout<<"\nTrial Number: "<<++count<<endl<<line<<endl;
			cout<<"Rock(0), Paper(1), Scissors(2):CHOOSE:\n";
			cin>>user_in;
			time(&seed);
			seed%=65535;//in range 0 to 65535
			srand((unsigned)seed);
			ranNum=rand()%(3);
			cout<<"\nComputer chooses "<<ranNum<<endl;
			result(ranNum, user_in, decide(ranNum, user_in));
		}
		count=0;
		while((ans!='n' and ans!='N' and ans!='y' and ans!='Y'))
		cout<<"\nDo you want to play again:(Y or N)?\n", cin>>ans;
		cin.sync(), cin.clear();
	}
	while(ans=='y' or ans=='Y');
	int total_pts;
	stray=(total_pts=rounds*9)-(win_Y + win_C);//points no one picked up
	cout<<"\n\nTHE END:::NICE PLAY\n--------------------\n";
	cout<<"Number of rounds:"<<rounds
	<<"\nTotal number of available points: "<<total_pts
	<<"\nTotal number of points not picked up: "<<stray;
	cout<<"\nPOINTS:\n------------------------\n"<<setw(12)
	<<left<<"PLAYER"<<setw(12)<<"POINTS"<<"\n------------------------\n"
	<<setw(12)<<left<<(isalpha(name[0])||isalpha(name[1])?name:"YOU")<<'\t'<<win_Y<<endl;
	cout<<setw(12)<<left<<"COMPUTER"<<'\t'<<win_C<<endl<<"------------------------"<<endl;
	cout<<"\nSo Overall ";
	win_Y!=win_C?
	(win_Y>win_C?cout<<"YOU WON, CONGRATS\a\a\a\a\a\a\a":
		cout<<"you lost, Sorry. Do better next time")
		:cout<<"You drew with the computer";
	cout<<"\n\nSEE YOU NEXT TIME\a\a\a\a\a\a\a\a\a";
	getch();
}
void game_set(){
	cout<<"-You can play as many rounds as you want\n"
	   <<"-Each round consists of three trials and each win is three points\n"
	   <<"-Your are to enter as follows:\n\n0 for ROCK\n1 for PAPER\n2 for SCISSORS\n";
}

short decide(int a, int b){
		if(a==b) return 0;
		else if(a==0 and b==1)return 2;//ie you win:paper covers rock;
		else if( a==0 and b==2) return 1;//computer wins:rock breaks scissors
		else if(a==1 and b==2) return 2;//you win
		else if(a==1 and b==0) return 1;//computer wins
		else if (a==2 and b==0) return 2;//you win
		else if(a==2 and b==1) return 1;//computer wins
		else return 1;//you lose for wrong input
}

void result (int a, int b, short d){
	switch(d){
		case 0:{
			win_C++;  ++win_Y;
			cout<<"No one wins: +1 points each\n";
			}break;
			
		case 1:{
			win_C+=3;
			cout<<"Computer Wins: +3 points!!\a\a\a\a\n";
			if(a==0 and b==2) cout<<"ROCK breaks SCISSORS\n";
			else if(a==1 and b==0) cout<<"PAPER covers ROCK\n";
			else if(a==2 and b==1) cout<<"SCISSORS cuts PAPER\n";
			else cout<<"Win by DEFAULT\n";
		}break;
		case 2:{
			win_Y+=3;
            cout<<"You win: +3 points!!\a\a\a\a\n";
			if(a==2 and b==0) cout<<"ROCK breaks SCISSORS\n";
			else if(a==0 and b==1) cout<<"PAPER covers ROCK\n";
			else if(a==1 and b==2) cout<<"SCISSORS cuts PAPER\n";
		}
	}
}
