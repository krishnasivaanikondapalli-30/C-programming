#include<stdio.h>
int main(){
    printf("25331A05E4\n");
	int n,i=1,fact=1;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	fact=fact*i;
	}
	printf("fact=%d",fact);
	return 0;
}
