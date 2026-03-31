#include<stdio.h>
int main(){
     printf("25331A05E4\n");
	int a[10][10],b[10][10],row,column;
	printf("enter no of rows and columns:");
	scanf("%d%d",&row,&column);
	printf("enter the elements in a:");
	for(int n=0;n<row;n++){
	for(int m=0;m<column;m++){
	scanf("%d",&a[n][m]);
	}
	}
	for(int n=0;n<row;n++){
	for(int m=0;m<column;m++){
	b[m][n]=a[n][m];
	}
	}
	for(int n=0;n<column;n++){
	for(int m=0;m<row;m++){
	printf("%d\t",b[n][m]);
	}
	printf("\n");
	}
	return 0;
}
