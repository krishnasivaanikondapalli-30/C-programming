#include<stdio.h>
int main(){
    printf("25331A05E4\n");
    int arr[20],size;
    printf("enter the size:");
    scanf("%d",&size);
    printf("enter the array:");
    for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
    }
    int *p=arr;
    printf("p=%p,*p=%d\n",p,*p);
    p++;
    printf("p=%p,*p=%d\n",p,*p);
    p--;
    printf("p=%p,*p=%d\n",p,*p);
    printf("*(p+3)=%d\n",*(p+3));
    return 0;
}
