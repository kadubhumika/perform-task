// program to insert an element at end of array using dynamic array
#include<stdio.h>
#include<stdlib.h>
void insertatend(int **arr, int *size, int element, int *capacity){
	 if (*size >= *capacity) {
        *capacity = *capacity * 2;  
        *arr = realloc(*arr, *capacity * sizeof(int));  
        if (*arr == NULL) {
            printf("Memory allocation failed\n");
            exit(1); 
    }
     }
	(*arr)[*size] = element;
	(*size)++;
}
int main() {
	int *arr=(int *)malloc(2*sizeof(int));
	if(arr==NULL){
		printf("Memory allocation failed\n");
		return 1;
	}
	int size=0;
	int capacity=2;
	insertatend(&arr,&size,5,&capacity);
	insertatend(&arr,&size,15,&capacity);
	insertatend(&arr,&size,25,&capacity);
	printf("Array elements : ");
	for(int i=0; i<size; i++){
	printf("%d",arr[i]);
	}
	printf("\n");
	free(arr);
	return 0;
	
}