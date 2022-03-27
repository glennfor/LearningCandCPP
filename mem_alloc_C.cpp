#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
main(){
	//sorting elements of an array in descending order
	int *arr, temp, i, j, n;
	printf("Enter the number elements to sort\n");
	scanf("%d", &n);
	arr=(int*)malloc(sizeof(int)*n);
	printf("\nEntre the elements\n");
	for(int count=0; count < n; ++count){
		printf("%2d. ", count+1);
		scanf("%d" ,&arr[count]);
		fflush(stdin);//clear input buffer
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]<arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("Elements in descending order:\n");
	for(i=0;i<n;i++){
		printf("%d  ", arr[i]);
	}
	printf("\n\nElements in ascending order:\n");
		for(i=n-1;i >=0;--i){
		printf("%d  ", arr[i]);
	}
	printf("\n\nMemory locations of elements in ascending order:\n");
	printf("_____________________________________________________\n");
	printf("ELEMENT DECIMAL \t HEXADECIMAL \t OCTAL\n");
	printf("_____________________________________________________\n");
		for(i=n-1;i >=0;--i){
		printf("%d \t %d \t %x \t %o\n",arr[i], &arr[i], &arr[i], &arr[i]);
	}
	getch();
}
/*
Dynamic memory Allocation
The process of allocating memory at the time of execution or at the runtime, is
called dynamic memory location.
Two types of problem may occur in static memory allocation.
-If number of values to be stored is less than the size of memory, there would be
wastage of memory.
-If we would want to store more values by increase in size during the execution on
assigned size then it fails.
Allocation and release of memory space can be done with the help of some library
function called dynamic memory allocation function. These library function are
called as dynamic memory allocation function. These library function prototype
are found in the header file, “alloc.h” where it has defined.
Function take memory from memory area is called heap and release when not
required.
Pointer has important role in the dynamic memory allocation to allocate memory.

1 malloc():
This function use to allocate memory during run time, its declaration is
void*malloc(size);
malloc ()
returns the pointer to the 1st byte and allocate memory, and its return type is void,
which can be type cast such as:
int *p=(datatype*)malloc(size)

If memory location is successful, it returns the address of the memory chunk that
was allocated and it returns null on unsuccessful and from the above declaration a
pointer of type(datatype) and size in byte.
And datatype pointer used to typecast the pointer returned by malloc and this
typecasting is necessary since, malloc() by default returns a pointer to void.
Example int*p=(int*)malloc(10);
So, from the above pointer p, allocated IO contigious memory space address of 1st
byte and is stored in the variable.
We can also use, the size of operator to specify the the size, such as
*p=(int*)malloc(5*size of int) Here, 5 is the no. of data.
Moreover , it returns null, if no sufficient memory available , we should always
check the malloc return such as, if(p==null)
printf(“not sufficient memory”);

Example:
//calculate the average of mark
void main()
{
int n , avg,i,*p,sum=0;
printf("enter the no. of marks ”);
scanf(“%d”,&n);
p=(int *)malloc(n*size(int));
if(p==null)
printf(“not sufficient”);
exit();
}
for(i=0;i<n;i++)
scanf(“%d”,(p+i));
for(i=0;i<n;i++)
Printf(“%d”,*(p+i));
sum=sum+*p;
avg=sum/n;
printf(“avg=%d”,avg);

2 calloc()
-Similar to malloc only difference is that calloc function use to allocate multiple
block of memory .
two arguments are there
1st argument specify number of blocks
2nd argument specify size of each block.
Example:-
int *p= (int*) calloc(5, 2);
int*p=(int *)calloc(5, size of (int));
-Another difference between malloc and calloc is by default memory allocated by
malloc contains garbage value, where as memory allocated by calloc is initialised
by zero(but this initialisation) is not reliable.
realloc()
The function realloc use to change the size of the memory block and it alter the
size of the memory block without loosing the old data, it is called reallocation of
memory.
It takes two argument such as;
int *ptr=(int *)malloc(size);
int*p=(int *)realloc(ptr, new size);
The new size allocated may be larger or smaller.
If new size is larger than the old size, then old data is not lost and newly allocated
bytes are uninitialized. If old address is not sufficient then starting address
contained in pointer may be changed and this reallocation function moves content
of old block into the new block and data on the old block is not lost

Example:
#include<stdio.h>
#include<alloc.h>
void main()
int i,*p;
116 *Under revision
p=(int*)malloc(5*size of (int));
if(p==null)
{
printf(“space not available”);
exit();
printf(“enter 5 integer”);
for(i=0;i<5;i++)
{
scanf(“%d”,(p+i));
int*ptr=(int*)realloc(9*size of (int) );
if(ptr==null)
{
printf(“not available”);
exit();
}
printf(“enter 4 more integer”);
for(i=5;i<9;i++)
scanf(“%d”,(p+i));
for(i=0;i<9;i++)
printf(“%d”,*(p+i));
}

free()
Function free() is used to release space allocated dynamically, the memory
released by free() is made available to heap again. It can be used for further
purpose.
Syntax for free declaration .
void(*ptr)
Or
free(p)
When program is terminated, memory released automatically by the operating
system. Even we don’t free the memory, it doesn’t give error, thus lead to memory
leak.
We can’t free the memory, those didn’t allocated.
Lecture Note: 29
Dynamic array
Array is the example where memory is organized in contiguous way, in the
dynamic memory allocation function used such as malloc(), calloc(), realloc()
always made up of contiguous way and as usual we can access the element in two
ways as:
Subscript notation
Pointer notation

#include<stdio.h>
#include<alloc.h>
void main()
{
printf(“enter the no.of values”);
scanf(“%d”,&n);
p=(int*)malloc(n*size of int);
If(p==null)
printf(“not available memory”);
exit();
}
for(i=0;i<n;i++)
{
printf(“enter an integer”);
scanf(“%d”,&p[i]);
for(i=0;i<n;i++)
{
printf(“%d”,p[i]);
}
*/
