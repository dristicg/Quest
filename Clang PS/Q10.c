// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i=0;
    int even=0;
    int odd=0;
 int arr[]={1,2,3,4,5,6,7,8,9,10,11,56};
 int arr_len=sizeof(arr)/sizeof(arr[0]);
 for(i=0;i<arr_len;i++){
     if(arr[i]%2==0){
         even=even+1;
     }
     else{
         odd=odd+1;
     }
 }
 printf("even %d\n", even);
 printf("odd %d",odd);
 

    return 0;
}