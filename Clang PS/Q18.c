// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[]={10, 20, 30, 40, 50};
    int size= sizeof(arr)/sizeof(arr[0]);
    
    
    for(int i=0;i<size;i+=2){
       printf("%d\n",arr[i]); 
    }

    return 0;
}