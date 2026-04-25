#include<stdio.h>
struct student {
    int id;
    char name[20];
};
int main() {
    FILE*fp;
    struct student s1 = {1, "krish"}; 
    struct student s2;
    fp=fopen("data.bin", "wb");
    fwrite(&s1,sizeof(s1),1,fp);
    fclose(fp);
    fp=fopen("data.bin", "rb");
    fread(&s2, sizeof(s1),1,fp);
    fclose(fp);
    printf("ID:%d Name:%s\n", s2.id, s2.name); 
    printf("25331A05E4");
    return 0;
}