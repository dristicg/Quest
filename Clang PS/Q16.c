// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr={3,5,9,1,7};
    int size = sizeof(arr)/sizeof(arr[0])

for(int i=0;i<size;i++){
    if(arr[i]<=0){
        printf("True");
    }
    
    else{
        printf("Flase");
    }
}

    return 0;
}