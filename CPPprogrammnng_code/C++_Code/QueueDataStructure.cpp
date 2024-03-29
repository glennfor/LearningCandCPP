/*
Summary: Queue is a data structure which works as FIFO principle. FIFO means First in First
 out�, i.e the element which we have inserted first will be deleted first and the element
 that we have inserted last will be deleted last.Two variables are used to implement queue,
 i.e “rear” and “front”. Insertion will be done at rear side and deletion will be
 performed at front side.
*/

#include <stdio.h>
#define MAX 50

#include <iostream>
using namespace std;
#include <cstdlib>

int queue_array[MAX];
int rear = - 1;
int front = - 1;
void insert(void);
int remove(void);//delete(void);
void display(void);

main()
{
	int choice;
	while (1)
	{
		printf("1.Insert element to queue \n");
		printf("2.Delete element from queue \n");
		printf("3.Display all elements of queue \n");
		printf("4.Quit \n");
		printf("Enter your choice : ");
		scanf("%d", &choice);
		switch (choice)
		{
			case 1:
			insert();
			break;
			case 2:
			remove();//delete();
			break;
			case 3:
			display();
			break;
			case 4:
			exit(1);
			default:
			printf("Wrong choice \n");
		}
	}
}

void insert()
{
	int add_item;
	if (rear == MAX - 1)
		printf("Queue Overflow \n");
	else
	{
		if (front == - 1)
/*If queue is initially empty */
			front = 0;
		printf("Inset the element in queue : ");
		scanf("%d", &add_item);
		rear = rear + 1;
		queue_array[rear] = add_item;
	}
}

int remove()//delete()
{
	if (front == - 1 || front > rear)
	{
		printf("Queue Underflow \n");
		return 1;
	}
	else
	{
		printf("Element deleted from queue is : %d\n", queue_array[front]);
		front = front + 1;
	}
}

void display()
{
	int i;
	if (front == - 1)
		printf("Queue is empty \n");
	else
	{
		printf("Queue is : \n");
		for (i = front; i <= rear; i++)
			printf("%d ", queue_array[i]);
		printf("\n");
	}

}

/*
Input: //Enter choices and data
*/
