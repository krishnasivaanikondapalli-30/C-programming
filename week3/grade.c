#include<stdio.h>
int main(){
    printf("25331A05E4\n");
	int marks;
	printf("enter the marks:");
	scanf("%d",&marks);
	if(marks>=90){
	printf("grade:A");
	}else if(marks>=80){
	printf("grade:B");
	}else if(marks>=70){
	printf("grade:C");
	}else if(marks>=60){
	printf("grade:D");
	}else{
	printf("fail");
	}
return 0;
}

