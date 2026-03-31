#include <stdio.h>
int main () {
    printf("25331A05E4\n");
    int a[3]={1, 2, 3};
    int b[3] ={4,5,6 };
    int *arr[2];
    arr[0] = a;
    arr[1]= b;
    for (int i = 0; i<2;i++){
    for (int j = 0; j<3 ;j++){
    printf("%d\t", arr[i][j]);
    }
    printf("\n");
    }
    return 0;
}