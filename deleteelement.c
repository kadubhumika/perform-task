// program to delete element in an array 
#include<stdio.h>
int main() {
	int array[100],n;
	printf("Enter number of elemts in array ");
	scanf("%d",&n);
	 printf("Enter elements of the array: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
	
	int position;
	
	printf("Enter position which you have to delete element between (0 to %d) : ",n);
	scanf("%d",&position);
	
	if(position>=0&&position<n){
	for(int i=position; i<n-1; i++){
		array[i]=array[i+1];
	}
	n--;
	 printf("Array after deletion: ");
        for (int i = 0; i < n; i++) {
            printf("%d \n", array[i]);
	}
	}
	else {
		printf("Invalid ");
	}
return 0; 
}