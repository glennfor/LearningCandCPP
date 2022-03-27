//LINKED LIST implementation

#include <iostream>
typedef int ELEMENT_TYPE;//can be changed later
typedef class node{
	public:
		ELEMENT_TYPE data;//
		node* next;//pointer link to next element
}NODE;
main(){
	std::cout<<"Enter elements :\n";
	NODE* list = new NODE, *cur=list;
	int entry;
	while(std::cin>>entry){
		list->data = entry;
		list = list->next;
	}
//	list=cur;
//	list->next = NULL;
//	std::cout<<"\nThe Elements you entered are : \n";
////	while(list){
//		std::cout<<list->data<<"  ";
//		list = list -> next;
//	}
	std::cin.get();
}
