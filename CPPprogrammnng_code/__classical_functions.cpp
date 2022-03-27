#include <stdio.h>
#include <conio.h>
#include <iostream>//unfortunately saved as a C++ file
					//try copying to a new c file and removing this header
#include <string.h>

void printArray(int arr[], int size){
	printf("\n[%d", arr[0]);
	for(int c=1; c<size; ++c)
		printf(", %d", arr[c]);
	printf("]\n");
}


//7,5,9,0,2,1,4,3,8,6
//insertion sort
void inSort(int arr[], int size){
	for(int i=1; i<size; ++i){
		int current=arr[i], j=i;
		while(j>0 and arr[j-1]>current)
			arr[j]=arr[--j];
		arr[j]=current;
	}
}

//selection sort for intergers
void selectSort(int arr[], int size){

	for(int i=0; i<size; ++i){
		int min=i;
		for(int j=i+1; j<size; ++j)
			if(arr[j]<arr[min])
				min=j;

		if(min!=i)
		{
			int tmp=arr[i];
			arr[i]=arr[min];
			arr[min]=tmp;
		}
	}
}


//bubble sort for an array of strings

void bubbleSort(char* strings[], int size){
    for(int i=0; i<size; ++i)
		for(int j=1; j<size-i-1; ++j)
			if(stricmp(strings[j],strings[j+1])>0){
				char *tmp;
				strcpy(tmp,strings[j+1]);
				strcpy(strings[j+1],strings[j]);
				strcpy(strings[j], tmp);
			}
}


int linearSearch(int arr[], int item, int size){
    for(int i=0; i<size; ++i)
        if(arr[i]==item)
            return i;
	return -1;
}


int iterativeBinarySearch(int arr[], int item, int low, int high){
	while(low<=high){
		int mid=(high+low)/2;
		
		if(arr[mid]==item)return mid;
		
		else if(arr[mid]<item)low=mid+1;
		
		else high=mid-1;
	}
	return -1;
}

//note that high and low are the highest and lowest indices un;like for the sorting fxns above
//high IS NOT the size of the array
int recursiveBinarySearch(int arr[], int item, int low, int high){
	if(low>high)
		return -1;
	int mid=(high+low)/2;

	if(arr[mid]==item)
		return mid;
	
	else if(arr[mid]<item)
		bin_search2(arr, item,  mid+1, high);

	else
		bin_search2(arr, item, low, mid-1);
}



//i changed the function names to make them more readable
//endeavor to correct them(function names) in this main function
//not all the funtions have been tested
//try to do that
//If you find any difficulties , Meet Me!! gn
int main(){
	int array[]={
		1,5,457,3,6,83,67,46,34,67
	};
	printf("___________________ bubble sort _______________________________\n\n");
	print_array(array, 10);
	//bubble sort for an inrteger list
	//on demand sort, no function
	for(int i=0; i<10; ++i){
		for(int j=0; j<10-i-1; ++j){
			if(array[j]>array[j+1]){
				int tmp=array[j+1];
				array[j+1]=array[j];
				array[j]=tmp;
			}
	}
	}
	
	print_array(array, 10);
	printf("____________________ selection sort _____________________________\n\n");
	int num[]={12,45,344,24543,2,12,8,12,45,3,676,234,986,4,0,-78,8+7
	};
	print_array(num, 17);
	sel_sort(num, 17);
	print_array(num, 17);
	printf("____________________ insertion sort ______________________________\n\n");
	int num22[]={7,5,9,0,2,1,4,3,8,6
	};
	print_array(num22, 10);
	insort(num22, 10);
	print_array(num22, 10);


	getch();
}

