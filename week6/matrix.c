#include<stdio.h>
int main(){
    printf("25331A05E4\n");
	int mat[10][10],column,row;
	printf("enter number of rows and columns:");
	scanf("%d%d",&row,&column);
	printf("enter the elements in matrix:");
	for(int n=0;n<row;n++){
	for(int m=0;m<column;m++){
	scanf("%d",&mat[n][m]);
	}
	}
	for(int n=0;n<row;n++){
	for(int m=0;m<column;m++){
	printf("%d\t",mat[n][m]);
	}
	printf("\n");
	}
	return 0;
}
