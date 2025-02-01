//program to find frquency of user element
#include<stdio.h>
int countOccurance(int arr[],int size, int x){
	int count=0;
	for(int i=0; i<+size;i++){
		if(arr[i]==x){
			count++;
		}
	}
	return count;
}
int main(){
	int x;
	printf("Enter x value : ");
	scanf("%d",&x);
	int arr[]={1,4,6,2,2,2,6};
	int size = sizeof(arr);
	int result=countOccurance(arr,size,x);
	printf("%d occurs %d times in array.",x,result);
	return 0;
}