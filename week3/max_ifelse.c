#include<stdio.h>
int main(){
    printf("25331A05E4\n");
	int a,b,c;
	printf("enter 3 numbers:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&a>c){
		printf("max=%d",a);
	}else if(b>c){
		printf("max=%d",b);
	}else{
		printf("max=%d",c);
	}
	return 0;
}
