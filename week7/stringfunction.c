#include<stdio.h>
#include<string.h>
int main(){
    printf("25331A05E4\n");
	char str1[100],str2[100],copystr[100];
	printf("enter the str1:");
	scanf("%s",str1);
	printf("enter the str2:");
	scanf("%s",str2);
	printf("length of str1:%lu\n",strlen(str1));
	printf("length of str2:%lu",strlen(str2));
	strcpy(copystr,str1);
	printf("\ncopied string:%s\n",copystr);
	strcat(str1,str2);
	printf("concatenat:%s",str1);
	if(strcmp(copystr,str2)==0){
	printf("\nstring are equal");
	}else{
	printf("\nstring are not equal");
	}
	return 0;
}
