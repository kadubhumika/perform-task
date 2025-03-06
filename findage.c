// program to calculate age of users using users birth year 
#include<stdio.h>
int funage(int birthyear, int currentyear);
int main() {
	int birthyear;
	printf("Enter your BirthYear : %d ",birthyear);
	int currentyear;
	printf("Enter your CurrentYear : %d ",currentyear);
	int result=funage( birthyear, currentyear);
	printf("Your age is according your BirthYear : %d ", result);
	
	
	
	
	
	
	
	return 0;
}
int funage(int birthyear, int currentyear){
	return currentyear-birthyear;
}