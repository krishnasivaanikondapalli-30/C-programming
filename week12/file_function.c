#include<stdio.h>
int main(){
FILE*fp;
int id;
char name[20];
fp=fopen("student.txt","w");
fprintf(fp,"101 Riya\n102 Priya\n");
fclose(fp);
fp=fopen("student.txt","r");
while(fscanf(fp,"%d %s",&id,name)!=EOF)
printf("ID: %d Name:%s\n",id,name);
fclose(fp);
printf("25331A05E4");
return 0;
}
