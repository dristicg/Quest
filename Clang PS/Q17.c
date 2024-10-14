// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[]={1,-2,3,-4,5,-6};
    int size= sizeof(arr)/sizeof(arr[0]);
    int pos_count=0;
    int neg_count=0;
    
    for(int i=0;i<size;i++){
        if(arr[i]>0){
            pos_count++;
        }
        else{
            neg_count++;
        }
    }
    
    printf("Positive No. :%d\n" ,pos_count);
     printf("Negative No. :%d\n" ,neg_count);
     
    return 0;
}