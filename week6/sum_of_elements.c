#include<stdio.h>
int main(){
    printf("25331A05E4\n");
	int arr[100],sum=0,i;
	printf("enter the element:");
	for(i=0;i<5;i++){
	scanf("%d",&arr[i]);
	sum=sum+arr[i];
	}
	printf("sum=%d",sum);
	return 0;
}