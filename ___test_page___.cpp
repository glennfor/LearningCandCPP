

#if 0
11. Given a valid mathematical expression involving ‘+’, ‘-’, ‘*’, ‘/’, ‘(’, and ‘)’ in a single
line, evaluate that expression. (e.g. a rather complicated but valid
expression3 + (8 -7.5) * 10 / 5 - (2 + 5 * 7) should produce -36.0 when evaluated
 with standard operator precedence.)

#endif


#include "MACROS.h"
#include <iostream>
#include <iomanip>

//[UTILITIES]
#include <cmath>
#include <cstdlib>
#include <conio.h>
#include <cctype>
#include <exception>
#include <sstream>//for string stream

#include <map>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#//include <multiset>

using namespace std;

#if 0
Will later be modified to complete expressions for users
may later be extended to take care of mathematical expressions like trig functions,

uses PEDMAS

P  ( )  parentheses or brackets
E   ^   exponentiation
D   /   division
M   *   multiplication
A   +   addition
S   -   subtraction

ADDITIONAL OPERATORS

modulo   %

might add bitwise and logical operators later


(12+3.5^-3+(5e.4-0.01))=[(, 12, +, 3.5, ^, -3,+,(,5e.4, -, 0.01, ) ,)]
89+12.5*(9+100) = [ 89, +, 12.5, *, (, 9, +, 100, ) ]

#endif

bool is_operator(char ch){
	string operators("()/%^*");
	//no -,+ because there is a case for -,+ as a signs
	int len = operators.length(), i  = 0;
	bool retval = false;//can optimise by removing retval with no ambiguities or reduction in readability
	for(;i < len; ++i)
		if (ch == operators.at(i)){//found an operator match to the character
		    return retval = true;
		    break;//for the sake of efficiency
		}
	return retval;
}
//start small and add the complexity later
//only handles decimals, integers and the operators but no negative
//numbers for now --working

//special cases

//negative numbers eg -5
//standard form eg 3.0e8, e10, 2E5, 2e-3, 2e-.4
//cases like 90(9)(8)
//sign attached to positive numbers: +23++45
//
//bitwise, logical
//use of fxns: log, sin, cos, tan, cosh, tansh, sinh, ln, etc
vector<string> tokenise2(string expr){
	vector<string> tks;
	unsigned short len = expr.length(), i = 0;
	string tmp("");
	
	while(i<len){
		if( is_operator(expr[i]) and
			(i!= 0 or !tolower(is_operator(expr[i-1]) == 'e'))
			or (expr[i]=='-' and (i==0 or is_operator(expr[i-1])) or expr[i-1] == '-') )
			tks.push_back(string(1,expr[i]));
		if(isdigit(expr.at(i)) or (expr[i] == '-'
			and(i == 0 or is_operator(expr[i-1])))){
			tmp+=expr.at(i++);
            while(i<len and (isdigit(expr.at(i)) or expr.at(i) == '.' or expr.at(i) == ',') )//, for french guys
				tmp+=expr[i++];
			--i;
            tks.push_back(tmp);
            tmp="";
		}
		++i;
	}
	return tks;
}



vector<string> tokenise(string expr){
	vector<string> tks;
	unsigned short len = expr.length(), i = 0;
	string tmp("");

	while(i<len){
		if( is_operator(expr[i]))
			tks.push_back(string(1,expr[i]));
		if((((expr[i] == '-' or expr[i] == '+')and
			not(i==0 or (expr[i-1] == '-' or expr[i-1] == '+')))
			)){
            tks.push_back(string(1,expr[i]));
			}

		if((isdigit(expr.at(i)) or expr[i] == 'e') or
   			((expr[i] == '-' or expr[i] == '+')and
			(i==0 or (expr[i-1] == '-' or expr[i-1] == '+')))
			)

		{
			tmp+=expr.at(i++);
            while(i<len and (isdigit(expr.at(i)) or expr.at(i) == '.' \
					or expr.at(i) == ',' or
				 	(expr.at(i) == 'e')) )//, for french guys
				tmp+=expr[i++];
			--i;
            tks.push_back(tmp);
            tmp="";
		}
		++i;
	}
	return tks;
}

void display(vector<string> vec){
	vector<string>::const_iterator it=vec.begin();
	cout << "[" << *(it++);
	while(it!=vec.end())
		cout << "," << *(it++);
	cout << "]\n";
}


main(){
	string exp;
		while(true){
		cout << "EXP  :  ";
		getline(cin, exp);
		cout << "\n";
		display(tokenise(exp));
		cout << "\n";
	}
}

