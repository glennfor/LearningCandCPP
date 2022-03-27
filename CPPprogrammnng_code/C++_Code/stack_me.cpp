
/***************************************************************888
**implementation of a simple stack using struct:: a stack uses LIFO
input/output method
**********************************************************************/

//----------------->JOHNN GLENN <------------------------------
#include <iostream>

#include <conio.h>
#include <cstdlib>

#define STACK_SIZE  100

struct stack{
	int items[STACK_SIZE];
	int count;
};
inline void init(stack &st){
	st.count=0;
}

void push(stack &st, const int entry){
	if(st.count < STACK_SIZE)
	st.items[st.count++]=entry;
	else
	std::cout<<"Stack overflow"<<std::endl;
}

int pop(stack &s){
	if(s.count==0){
		std::cout<<"Stack underflow"<<std::endl;
		return 0;
	}
	return s.items[--s.count];
}

main(){//test stack
	stack the_stack, &stack_alias=the_stack;
	std::cout<<"Dealing with stacks:\n\n";
	init(stack_alias);
	while(true){
	std::cout<<"Enter 1. To add element to stack.\n      2.To Display an element from the stack\n";
	std::cout<<"      Any non-digit to stop \n\n";
	int choice;
	std::cin.sync();
	if(std::cin>>choice)
		switch(choice){
			default:
				std::cout<<"This entry is unknown\a\a\n";
				break;
			case 1:
				int num;
				std::cout<<"Enter the element to add to stack:\n";
				std::cin.sync();
				std::cin>>num;
				push(stack_alias, num);
				break;
			case 2:
				std::cout<<std::endl<<"Element popped is "<<pop(stack_alias)<<std::endl;
		}//end switch
	else {
		std::cout<<"Press any key to exit....";
		getch();
		break;
	}
}//end while

}



