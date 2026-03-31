#include<stdio.h>
#include<math.h>
int main(){
    printf("25331A05E4\n");
	float principleamount,time,rate;
	printf("enter principleamount:");
	scanf("%f",&principleamount);
	
	printf("enter time:");
	scanf("%f",&time);
	
	printf("enter rate:");
	scanf("%f",&rate);

    float si;
    si = principleamount*time*rate/100;
	printf("si=%f\n",si);
	
	float ci,amount;
	amount=principleamount*pow((1+rate/100),time);
	ci=amount-principleamount;
	printf("ci=%f",ci);
	return 0;
}
	
