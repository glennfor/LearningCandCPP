/*NOTE THAT THIS PROGRAM IS QUITE USER UNFRIENDLY BECAUSE IT IS JUST A TEST*/
/*There are many incomplete features so only I may be able to enter info
correctly as of now*/

/*ALSO THERE ARE MANY MISTAKES TO BE RECTIFIED LATER*/
# include <iostream>
# include <conio.h>
# include <cstdlib>

# include <string>//string class
# include <cstring>
#include <cctype>// ctype.h(decisional macros)

#include <sstream>
#include <cstdio>
#include <iomanip>


using namespace std;

/* GET PERSONAL INFORMATION */
struct person{
	int age, year;
	float height;// in metric units i.e cm or m
 	double weight;// in metric units(Kg)  or customary units(Pounds(lbs))
	char Email[50];// official email or a personal website
	string name;
	char blood_type;// AOB not Rhesus system(eg, A,O,B but not O+, B-, etc)
	double salary;// per year in American dollars
}him, her, you{25, 1972, 1.7,70.65,"http://www.futuregreen@gmail.com/info.html","Carlos Lesage",
	'O', 160925.625
	};
/*THIS WAS AN ERROR MESSAGE
 C:\Users\nfor\Documents\STRUCTURES.cpp [Warning] extended initializer lists only available
 with -std=c++0x or -std=gnu++0x [enabled by default]
 when i did implicite initialisation
person you{25, 1972, 1.7, 70.65, "http://www.futuregreen@gmail.com/info.html", "pal Lesage",
	'O', 160925.625};*/
	
/*GET OFFICIAL INFORMATION */

struct official{
	person you;//NESTING STRUCTURES
	char gender, /*or sex*/ title[5];//like Dr, Miss, Mrs, Mr, Prof, Rev, Hon, HRH,
	string marital_status;// married, single(barchelor, spinster) , divorced, Legend
	char occupation[20];// carreer, job, proffesion
	char work[25];// which company you work for, business you own,
	};
	

void display_info(person *);//display personal information
bool decision(official*);//determines if a person is eligible to stand as president in Redecall Labs(made-up name)
void display_other(official);// display official information
inline void alph(bool);//just to display info as i want***||***


main(){
    using namespace std;

	person me, my_friend, pal, JG;
	official my_sis, mom, buddy;
	
	person *ptr_me, *ptr_pal=&pal, *say=&you;;
	official *ptr_my_sis=&my_sis, *ptr_mom=&mom;
	
	string line(50, '-'), temp;
	
	/*you.age=25, you.year=1972, you.height=1.7,you.weight=70.65,
    you.Email[50]="http://www.futuregreen@gmail.com/info.html",
	you.name("pal Lesage"),
	you.blood_type='O', you.salary=160925.625;*/
	
	cout<<"\11!!PROGRAM TO PLAY WITH DATA STRUCTURES and RECORDS!!\10\n\n";
	cout<<line;
	cout<<"\nEnter the following information::\n";
	cout<<"Age and Year of birth:    ";
	cin>>pal.age>>pal.year;
	cin.sync();//clear buffer
	cout<<endl<<"Your Height and Weight:    ";
	cin>>pal.height>>pal.weight;
	cin.sync();//clear buffer
	cout<<endl<<"Your Email:\n";cin.clear(),cin.sync();
	gets(pal.Email);
	printf("Your Name:\n");
	getline(cin ,pal.name);
	cout<<endl<<"Your Salary:";
	cin>>pal.salary;
	cin.sync();//clear buffer
	cout<<"Your Blood Type:"; cin>>pal.blood_type;
	cin.sync();//clear buffer
	/*Now for official*/
	cout<<"\n\nEnter Other information::\n";
	cout<<"Gender: "; cin>>my_sis.gender;
	cout<<"Title:"; scanf("%s", &my_sis.title);// was gets
	fflush(stdin);//clear buffer::C
	cout<<"Marital Status: "; cin>>my_sis.marital_status;
	cin.sync();//clear buffer
	cout<<"Your Occupation::"; scanf("%s", &my_sis.occupation);//was also gets
	fflush(stdin);//clear buffer::::C
	cout<<"Where do you work? "; scanf("%s", &my_sis.work);
	fflush(stdin);//clear buffer in C
	/*end of info collection*/
	cout<<endl<<":::INFORMATION ANALYSIS:::\n"<<line<<endl;
	display_info(ptr_pal);
	cout<<endl<<line<<endl;
	display_other(my_sis);
	cout<<endl<<line<<endl;
	cout<<"Can *** Stand for presidency in Redecall Labs?  ";alph(decision(ptr_my_sis));cout<<endl;
	cout<<endl<<you.salary<<endl<<you.Email<<endl<<
	you.name<<endl<<you.blood_type;//trying something
	display_info(say);
	getch();
}
void display_info(person *point){
	cout<<"\nPERSONAL INFORMATION:\n";
    cout<<"Age and Year of birth: ";
	cout<<point->age<<" , "<<point->year;
	cout<<endl<<"Your Height and Weight:  ";
	cout<<point->height<<"\t"<<point->weight;
	cout<<endl<<"Your Email :  ";
	printf("%s",point->Email);
	cout<<"\nYour Name: ";
	cout<<point->name;
	cout<<endl<<"Your Salary:";
	printf("%.3f",point->salary);
	cout<<"\nYour Blood Type:"<<point->blood_type;
}

void display_other(official bros){
	cout<<"OTHER INFORMATION::\n";
	person *temp=&(bros.you);/**there is some problem here **/
	display_info(temp);
	cout<<"\n\nFurther Information::\n";
	cout<<"Gender: "<<bros.gender;
	cout<<"\nTitle:    "; printf("%3s", bros.title);
	cout<<"\nMarital Status::: "<<bros.marital_status;
	cout<<"\nYour Occupation:: "; printf("%s", bros.occupation);
	cout<<"\nYou work with::: "; printf("%.12s", bros.work);
	cout<<"\nEND\n";
}

bool decision(official* ptr){
	if(ptr->you.age>=25 and (ptr->gender=='M' or ptr->gender=='m')and ptr->you.blood_type=='O')
	    return true;
	return false;
}

inline void alph(bool bit){
	bit==true?cout<<"TRUE":cout<<"FALSE";
}
