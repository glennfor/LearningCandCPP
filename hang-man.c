#include <stdio.h>
#include <string.h>
#include <time.h>

char* HangManTemplates[]={
        "\n"
		"  +---+\n"
		"  |   |\n"
		"      |\n"
		"      |\n"
		"      |\n"
		"      |\n"
		"=========\n",

        "\n"
		"  +---+\n"
		"  |   |\n"
		"  O   |\n"
		"      |\n"
		"      |\n"
		"      |\n"
		"=========\n",

        "\n"
		"  +---+\n"
		"  |   |\n"
		"  O   |\n"
		"  |   |\n"
		"      |\n"
		"      |\n"
		"=========\n",

        "\n"
		"  +---+\n"
		"  |   |\n"
		"  O   |\n"
		" /|   |\n"
		"      |\n"
		"      |\n"
		"=========\n",
		
		"\n"
		"  +---+\n"
		"  |   |\n"
		"  O   |\n"
		" /|\\  |\n"
		"      |\n"
		"      |\n"
		"=========\n",

        "\n"
		"  +---+\n"
		"  |   |\n"
		"  O   |\n"
		" /|\\  |\n"
		"   \\  |\n"
		"      |\n"
		"=========\n",

        "\n"
		"  +---+\n"
		"  |   |\n"
		"  O   |\n"
		" /|\\  |\n"
		" / \\  |\n"
		"      |\n"
		"=========\n"
};

char *sampleWords[]={
	"hello",
	"hample",
	"english",
	"welcome",
	"function",
	"program",
	"computer",
	"science",
	"question",
	"answers",
	"solution",
	"dynamic",
	"structure",
	"algorithmn",
	"portable"
//	edition ring product awarded museum innovation computer fedora cloud solar universe jupiter saturn asteroid light stapler highlighter pencil serial
};

void setString(char pl[], int len){
	int i = 0;
	for(; i< len; ++i)
	    pl[i]='_';
}

int findSpot(char placeholder[], char word[], char ch){
	int i = 0;
	for(;i <strlen(word); ++i)
	    if(word[i]==tolower(ch)&& placeholder[i]=='_')
			return i;
	return -1;
}

void runGame(char word[]){
	char placeholder[strlen(word)];
	setString(placeholder, strlen(word));
	
	int hin = 0, win = 0;
	while( hin < 7){
		puts(HangManTemplates[hin]);
		printf("\n%s\n", placeholder);
		printf("\nEnter Letter: ");
		fflush(stdin);
		char ch = getchar();
		int pos = -1;
		if((pos = findSpot(placeholder,word, ch))>-1)
		{
			placeholder[pos] = ch;
		}
		else ++hin;
		if(!strcmp(placeholder, word)){
			win = 1;
			break;
		}
	}
	if(win){
		printf("\nYOU WON CONGRATS");
	}
	else{
		printf("\nYOU LOSE, Word is: %s", word);
	}
}


main(){
	printf("\t\tWelcome To A Game of Hangman:(^^)\n\n");
	int pos = 0;
	char ans;
	do{
		srand(time(NULL));
		pos = rand()%15;
		fflush(stdin);
		runGame(sampleWords[pos]);
		printf("\n\nPlay Again[y/n]: ");
		ans = getch();
		printf("\n----------------------------------------------\n");
	}
	while(ans=='y' || ans=='Y');
	printf("\n\nGood Bye!!!");
	getch();
	getch();
}

