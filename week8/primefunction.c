#include<stdio.h>
void prime(int n){
	int i,count=0;
	for(i=2;i<=n;i++)
	if(n%i==0){
	count++;
	}
	if(count==1){
	printf("%d is prime",n);
	}else{
	printf("%d is not prime",n);
	}
	}
	int main(){
          printf("25331A05E4\n");
	int a;
	printf("enter the value of a:");
	scanf("%d",&a);
	prime(a);
}
