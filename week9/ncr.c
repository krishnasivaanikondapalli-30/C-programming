#include<stdio.h>
int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*factorial (n-1);
    }
}   
int ncr(int n,int r)
{
    if(r==0||r==n)
    {
        return 1;
    }
    else if(r>n/2)
    {
        r=n-r;
    }
    return factorial (n)/(factorial (r)*factorial (n-r));
}
int main()
{
     printf("25331A05E4\n");
    int a,b,res;
    printf("Enter two positive integers: ");
    scanf("%d%d",&a,&b);
    res=ncr(a,b);
    printf("res=%d",res);
    return 0;
}
