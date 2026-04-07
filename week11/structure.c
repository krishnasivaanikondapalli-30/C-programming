#include<stdio.h>
#include<string.h>
	struct student{
	int roll_no;
	char name[20];
	float marks;
	};
int main(){
    printf("25331A05E4\n");
	struct student s;
	printf("enter the roll number:");
	scanf("%d",&s.roll_no);
	printf("enter the name:");
	scanf("%s",s.name);
	printf("enter the marks:");
	scanf("%f",&s.marks);
	printf("Roll no:%d\n",s.roll_no);
	printf("Name:%s\n",s.name);
	printf("Marks:%f\n",s.marks);
    return 0;
}