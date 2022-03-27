/*
   *NFOR GLEN YINYU
   *Determination of the roots of a  quadratic equation
   *
   *Written in C++
 */
 
 /*
I AM MODIFYING THE PROGRAM TO STORE THE RESULT OF ALL OPERATIOS IN A TEXT FILE OF THE SAME
NAME WITH THE DATA
 */
#include <iostream>
#include <conio.h>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <ctime>
using namespace std;
main (int argc, char*argv[])//or char**argv but for sake of indexing
{
	/*
	cout<<"exp" is equivalent to:  std::cout<<"exp"; when a namespace is not define
	*/
	fstream file_obj("Quad_C++.txt", ios::app|ios::out);
	if(!file_obj.is_open())cout<<"oops, not so fast\n\n";
	string line(60, '-');
	long seconds;
	time(&seconds);
	file_obj<<"\n\n\n\t\t\t\t\t"<<ctime(&seconds);
	cout<<"\t\x11\x11\x11";
	file_obj<<"\t\x11\x11\x11";
    cout<<"  CODE TO DETERMINE ROOTS OF A QUADRATIC EQUATION  ";
	cout<<"\x10\x10\x10"<<endl;
	cout<<"         "<<line<<endl;
    cout<<"FORM: ax^2 + bx + c=0,  with a>0"<<endl;
    file_obj<<"  CODE TO DETERMINE ROOTS OF A QUADRATIC EQUATION  ";
    file_obj<<"\x10\x10\x10"<<endl;
	file_obj<<"         "<<line<<endl;
    file_obj<<"FORM: ax^2 + bx + c=0,  with a>0"<<endl;
    
    start:
        float a,b,c, discriminant,root1,root2;
		float realpart,imaginarypart;// for complex solutions
        cout<<"\nEnter the coefficients a,b,and c:"<<endl;
		cin>>a>>b;
		cin>>c;
		file_obj<<"\nEnter the coefficients a,b,and c:"<<endl;
		file_obj<<a<<"\t"<<b<<'\t'<<c;
        discriminant=b*b-(4*a*c);
    if (discriminant>0)
	  {
            root1=(-b+sqrt(discriminant))/(2*a);
            root2=(-b-sqrt(discriminant))/(2*a);
            cout<<endl<<"Roots of equation"<<endl<<"root1= "<<root1<<" and root2= "<<root2<<endl;
            cout<<endl<<"Roots are Real and Distinct"<<endl;
            file_obj<<endl<<"Roots of equation"<<endl<<"root1= "<<root1<<" and root2= "<<root2<<endl;
            file_obj<<endl<<"Roots are Real and Distinct"<<endl;
      }
    else if (discriminant==0)
     {
            root1=root2=-b/(2*a);
            cout<<endl<<"Roots of equation"<<endl<<"root1="<<root1<<" and root2="<<root1<<endl;
            cout<<endl<<"Roots are Real and Equal(double or repeated)"<<endl;
            file_obj<<endl<<"Roots of equation"<<endl<<"root1="<<root1<<" and root2="<<root1<<endl;
            file_obj<<endl<<"Roots are Real and Equal(double or repeated)"<<endl;
     }
    else
     {
     realpart=-b/(2*a);
     imaginarypart=sqrt(-discriminant)/(2*a);
     cout<<endl<<"Roots of equation"<<endl;
     file_obj<<endl<<"Roots of equation"<<endl;
	 cout<<"root1="<<realpart<<"+"<<imaginarypart<<"i and root2="<<realpart<<"-"<<imaginarypart<<"i"<<endl;
	 file_obj<<"root1="<<realpart<<"+"<<imaginarypart<<"i and root2="<<realpart<<"-"<<imaginarypart<<"i"<<endl;
	 cout<<endl<<"Roots are Complex and Distinct"<<endl;
	 file_obj<<endl<<"Roots are Complex and Distinct"<<endl;
    }
cout<<"----------------------------------------------------------------------------"<<endl;
file_obj<<"----------------------------------------------------------------------------"<<endl<<endl;
check:
/*cout<<endl<<"Do you wish to continue\?: (1=YES  0=NO)"<<endl;
int choice;
cin>>choice;
if(choice==1)
    goto start;
else if(choice==0)
	goto end;
else{
	cout<<endl<<"-------------------"<<endl<<"Response is 1 or 0|"<<endl<<"-------------------"<<endl;
	goto check;*/
	
cout<<endl<<"Do you wish to continue\?:"<<endl;
string choice;
cin>>choice;
if(choice=="yes" || choice=="Yes" ||choice=="YES" or choice=="1"){
	file_obj<<"\t\t\tNEXT SESSION";
    goto start;
}
else if(choice=="no" || choice=="No" || choice=="NO" or choice=="0")
	goto end;
else{
    cout<<"\n----------------------\nRespond with yes or no\n----------------------\n";
	goto check;
}

getch();
end:
	file_obj.close();
	cout<<endl<<endl;
	system("pause");
return 0;
}
