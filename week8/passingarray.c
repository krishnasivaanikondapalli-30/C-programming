#include<stdio.h>
void arr(int a[],int size){
	int sum=0;
	for(int i=0;i<size;i++){
	sum = sum+a[i];
	}
    printf("sum of elements=%d",sum);
	}
	int main(){
		  printf("25331A05E4\n");
	int b[20],size,sum;
	printf("enter the size of array:");
	scanf("%d",&size);
	printf("enter the elements in the array:");
	for(int i=0;i<size;i++){
	scanf("%d",&b[i]);
	}
	arr(b,size);
}
