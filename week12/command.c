#include <stdio.h>

int main(int argc, char *argv[]) 
{
      printf("25331A05E4\n");
    FILE *source, *target;
    char ch;
    if (argc != 3) {
    printf("Usage: program sourcefile targetfile\n");
    return 1;
    }
    source = fopen(argv[1], "r");
    target = fopen(argv[2], "w");
    if (source == NULL || target == NULL) {
    printf("Error opening file\n");
    return 1;
    }
    while ((ch = fgetc(source)) != EOF) {
    fputc(ch, target);
    }
    fclose(source);
    fclose(target);
    printf("File copied successfully\n");
  
    return 0;
}