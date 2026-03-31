#include <stdio.h>

int main() {
    printf("25331A05E4\n");
    char str1[100], str2[50]; 
    int i = 0, j = 0;
    printf("Enter first string:");
    scanf("%s",str1);
    printf("Enter second string:");
    scanf("%s",str2);
    while (str1[i] != '\0') {
        i++;
    }
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';

    printf("Result: %s\n", str1);
    return 0;
}
