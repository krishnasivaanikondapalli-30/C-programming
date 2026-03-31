#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("25331A05E4\n");
    int *p1;
    p1=(int *)malloc(sizeof(int));
    printf("enter no: ");
    scanf("%d",p1);
    printf("%d\n",*p1);
    p1=(int *)realloc(p1,5*(sizeof(int)));
    printf("enter no: ");
    for(int i=0;i<5;i++){
    scanf("%d",&p1[i]);
    }
    for(int i=0;i<5;i++){
    printf("%d\n",p1[i]);
    }
    free(p1);
return 0;
}
