#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("25331A05E4\n");
    int *p1;
    int *p2;
    p1=(int*)malloc(sizeof(int));
    *p1=10;
    printf("value pointed by p1:%d\n",*p1);
    p2=(int*)calloc(5,sizeof(int));
    printf("value pointed by p2:%d\n",*p2);
    free(p1);
    free(p2);
    return 0;
}