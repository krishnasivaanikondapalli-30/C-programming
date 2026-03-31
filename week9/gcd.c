#include <stdio.h>
int GCD(int a, int b) {
    if (b == 0) {
    return a;
    }
    return GCD(b,a % b);
}

int main() {
      printf("25331A05E4\n");
    int num1, num2;
    printf("Enter two positive integers: ");
    scanf("%d %d",&num1,&num2);
    printf("GCD of %d and %d is %d\n",num1,num2,GCD(num1, num2));
    return 0;
}