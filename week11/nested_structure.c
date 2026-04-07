#include<stdio.h>
struct address{
	char city[20];
	int pincode;
	};
struct student{
	int roll_no;
	char name[20];
	float marks;
	struct address addr;
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
	printf("enter the city:");
	scanf("%s",s.addr.city);
	printf("enter the pincode:");
	scanf("%d",&s.addr.pincode);
	printf("Roll no:%d\n",s.roll_no);
	printf("Name:%s\n",s.name);
	printf("Marks:%f\n",s.marks);
	printf("City:%s\n",s.addr.city);
	printf("Pincode:%d\n",s.addr.pincode);
	return 0;
}