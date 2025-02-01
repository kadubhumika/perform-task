//write a program to find largest no in array  
#include<stdio.h>
int largestnumber(int arr[], int size){
	int largest=arr[0];
	for(int i=1; i<=size; i++){
		if(arr[i]>largest){
			largest=arr[i];
		}
	}
	return largest;
}
int main(){
	int size;
	printf("Enter size of array : ");
	scanf("%d",&size);
	int arr[size];
	printf("Enter %d elements:\n", size);
	for(int i=0; i<=size; i++){
		scanf("%d", &arr[i]);
		
	}
	int result=largestnumber(arr,size);
	printf("Largest number in array is : %d",result);
	return 0;
}