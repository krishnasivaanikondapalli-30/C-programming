#include<stdio.h>
int main(){
    printf("25331A05E4\n");
	int a[10][10],b[10][10],sum[10][10],row,column;
	printf("ener no of rows and columns:");
	scanf("%d%d",&row,&column);
	printf("ener the elements in a:");
	for(int n=0;n<row;n++){
	for(int m=0;m<column;m++){
	scanf("%d",&a[n][m]);
	}
	}
	printf("enter the elements in b:");
	for(int n=0;n<row;n++){
	for(int m=0;m<column;m++){
	scanf("%d",&b[n][m]);
	}
	}
	for(int n=0;n<row;n++){
	for(int m=0;m<column;m++){
	sum[n][m]=a[n][m]+b[n][m];
	}
	}
	for(int n=0;n<row;n++){
	for(int m=0;m<column;m++){
	printf("%d\t",sum[n][m]);
	}
	printf("\n");
	}
	return 0;
}
