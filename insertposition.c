// program to insert an element at a given position in an arrray 
#include<stdio.h>
#include<stdlib.h>
void insertposition(int **arr, int *size, int element , int position){
	if(position<0||position>*size){
		printf("Invalid position ");
		
	}
	*arr= realloc(*arr,(*size+1)*sizeof(int));
	if(*arr==NULL){
		printf("Memory allocation failed !");
		exit(1);
	}
	for(int i=*size; i>position; i--){
		(*arr)[i]=(*arr)[i-1];
	}
	(*arr)[position]=element;
	(*size)++;
}
int main() {
	int *arr=NULL;
	int size=0;
	int element,position;
	int n;
	printf("Enter umber of elements to be enter :");
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof(int));
	if(arr=NULL){
		printf("Memory allocation failed !");
		return 1;
	}
	printf("Enter %d elements :",n);
	for (int i=0; i<n; i++){
		printf("Elements %d : ",i+1);
	scanf("%d",&arr[i]);
	size++;
	}
	printf("Enter element to be insert :");
	scanf("%d",&element);
	printf("Enter position to be enter between (0 to %d) : ",size);
	scanf("%d",&position);
	insertposition(&arr,&size,element,position);
	printf("Array after insertion : ");
	for(int i=0; i<size; i++){
		printf("%d",arr[i]);
	}
	printf("\n");
	free(arr);
	return 0;
	
}