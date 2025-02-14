#include<stdio.h>
int tocheckprime( int n){
int is_prime[n+1];
for(int i=0; i<n; i++){
	is_prime[i]=1;
}
is_prime[0]=is_prime[1]=0;
int p=2;
while(p*p<=n){
	for(int i=p*p; i<n; i=i+p){
		is_prime[i]=0;
	}
	p++;
}
int n;
printf("Enter your number upto which digit prime number needed : %d\n",n);
int countprime=0;
for(int i=2; i<=n; i++){
	if(is_prime[i]==1){
		printf("%d",i);
		countprime++;
	}
}
printf("\n");
return countprime;
}
int main(){
    int n;
	printf("Enter the upper limit to find prime number : ");
	scanf("%d",&n);
	int numberofprimes=tocheckprime(n);
	printf(" Total number of primes : %d",numberofprimes);
	return 0;
}