#include <stdio.h>
#include <string.h>

int main() {

char str[100];
char spe_cha;
// int size=sizeof(str)/sizeof(str[0]);
int length;

printf("enter string: ");
scanf("%s\n",str);

printf("enter specific charater: ");
scanf("%c\n", spe_cha);

length = strlen(str);

if(str[length-1] == spe_cha){
    printf("this string ends with specific charater '%c\n'",spe_cha);
}
else{
    printf("this do not ends with specific charater");
}

    return 0;
}

// find error priyasha