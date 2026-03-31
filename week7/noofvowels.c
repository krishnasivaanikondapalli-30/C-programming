#include<stdio.h>
int main(){
      printf("25331A05E4\n");
	char str[100];
	int count=0;
	printf("enter the string:");
	scanf("%s",str);
	for(int i=0;str[i]!='\0';i++){
	if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
	count++;
	}
	}
	printf("no of vowels:%d",count);
	return 0;
}