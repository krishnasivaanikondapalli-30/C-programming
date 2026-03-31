#include<stdio.h>
int main(){
    printf("25331A05E4\n");
	int num,original,reverse=0,digit;
	printf("enter a number");
	scanf("%d",&num);
	original=num;
	while(num>0){
	digit=num%10;
	reverse=reverse*10+digit;
	num=num/10;
	}
	if(original==reverse){
	printf("number is a palindrome");
	}else{
	printf("number is not a palindrome");
	}
	return 0;
}