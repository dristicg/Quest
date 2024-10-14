#include <stdio.h>

int main() {
char str[]= "hello";

for (int i=0;i<str[i];i++){
    if(str[i] >= 'a' && str[i]<= 'z'){
        str[i]-=32;
    }
}
printf("%s\n",str);

    return 0;
}