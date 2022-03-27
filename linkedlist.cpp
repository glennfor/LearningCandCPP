#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
struct node{
	int data;
	node* next;
};
node *head=NULL;
node* current=NULL;
//display list
void reverseprint(struct node* list){
	if(list==NULL){
	printf("[NULL]=>");
	return;
  }
	reverseprint(list->next);
	printf("%d=>", list->data);
		
}
//insert link at the fisrt positon
void insert(int data){
	//allocate memory for new node
	struct node* link=(struct node*)malloc(sizeof(struct node));//create alink
	//link->key=key
	link->data=data;
	//point it to the old node
	link->next=NULL;
	//if head is empty create new list
	if(head==NULL){
		head=link;
		return;
	}
	current=head;
	//move to the end of the list
	while(current->next!=NULL)
	current=current->next;
	//insert link at end of the list
	current->next=link;
}

main(){
	insert(45);
	insert(2);
	insert(8);
	insert(1);
    insert(234);
    insert(56);
    reverseprint(head);
    getch();
    return 0;
}
