#include <stdio.h>
#include <string.h>
int main() {
    char str_name[100];
    char ext;
    printf("Enter file name: ");
    scanf("%s", str_name);
    
    printf("Enter extension: ");
    scanf("%c", &ext);
    
    printf("Extension entered: %c\n", ext);
    return 0;
}