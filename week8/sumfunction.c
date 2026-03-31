#include<stdio.h>
	int sum(int,int); 
	int main(){

	int num1,num2,add;
	printf("enter two numbers:");
	scanf("%d%d",&num1,&num2);
	add=sum(num1,num2);
	printf("sum=%d",add);
	return 0;
	}
	int sum(int a,int b){
	return a+b;
	}