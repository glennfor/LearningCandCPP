#include <stdio.h>
#include<stdlib.h>
struct node{
	int data;
	node* next;
};
node *head=NULL;
node* current=NULL;
//display list
void printlist(){
	struct node *ptr=head;
	printf("\nHEAD=>");
	//starting from the begginnning
	while(ptr!=NULL){
		printf("%d=>", ptr->data);
		ptr=ptr->next;
	}
	printf("[NULL]\n");
}
//insert link at the fisrt positon
void insert(int data){
	struct node* link=(struct node*)malloc(sizeof(struct node));//create alink
	//link->key=key
	link->data=data;
	//point it to the old node
	link->next=head;
	//point first to new first node
	head=link;
}

main(){
	insert(45);
	insert(2);
	insert(8);
	insert(1);
    insert(234);
    insert(564);
    printlist();
    system("pause");
    return 0;
}
