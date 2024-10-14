#include <stdio.h>
#include <string.h>

int main() {
    
    char srt1[100]="hello";
    char str2[]="world";
    
    strcat( str1, str2);
printf("%s\n",str1);



    return 0;
}




#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], result[200];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);   


    strcpy(result, str1);  // Copy the first string to the result
    strcat(result, str2);  // Concatenate the second string to the result

    printf("Concatenated string: %s\n", result);

    return 0;
}