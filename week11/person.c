#include<stdio.h>
struct person{
    char name[20];
    int age;
    float height;
    float weight;
    };
int main (){
    printf("25331A05E4\n");
    struct person p;
    printf("enter the name:");
    scanf("%s",p.name);
    printf("enter the age:");
    scanf("%d",&p.age);
    printf("enter the height:");
    scanf("%f",&p.height);
    printf("enter the weight:");
    scanf("%f",&p.weight);
    printf("Name:%s\n",p.name);
    printf("Age:%d\n",p.age);
    printf("Height:%f\n",p.height);
    printf("Weight:%f\n",p.weight);
    return 0;
}