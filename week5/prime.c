#include<stdio.h>
int main(){
     printf("25331A05E4\n");
int n, i, j, isprime;
    printf("the prime numbers from 1 to 100:\n");
    for(i = 2; i <= 100; i++){
    isprime = 1;
    for(j = 2;j <= i/2; j++){
    if(i % j == 0){
    isprime = 0;
    }
    }  
    if(isprime == 1){
    printf("%d\n", i);
    }
    }
    return 0;
}