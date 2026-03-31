#include<stdio.h>
int main(){
    printf("25331A05E4\n");
	int a=0,b=1,c,i,n;
	printf("enter a numbers:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	printf("%d\n",a);
	c=a+b;
	a=b;
	b=c;
	}
	return 0;
}
