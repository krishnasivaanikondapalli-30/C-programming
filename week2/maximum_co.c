#include<stdio.h>
int main(){
	printf("25331A05E4\n");
	int a,b,c,max;
	printf("enter 3 numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	max=a>b&a>c?a:(b>c?b:c);
	printf("max=%d",max);
    return 0;
}