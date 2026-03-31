#include<stdio.h>
int main(){
    printf("25331A05E4\n");
	int num,sum=0,digit;
	printf("enter a number:");
	scanf("%d",&num);
	while(num>0){
	digit=num%10;
	sum=sum+digit;
	num=num/10;
	}
	printf("sum=%d",sum);
	return 0;
}


