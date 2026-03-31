#include<stdio.h>
int main(){
    printf("25331A05E4\n");
	int a,b,choice;
	printf("1.add\n2.subtract\n3.multiply\n4.divide\n");
	printf("enter your choice:");
	scanf("%d",&choice);
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	switch(choice){
	case 1:
	printf("sum=%d",a+b);
	break;
	case 2:
	printf("subtraction=%d",a-b);
	break;
	case 3:
	printf("multiplicatin=%d",a*b);
	break;
	case 4:
	printf("division=%d",a/b);
	break;
	default:
	printf("invalid operation");
	}
}