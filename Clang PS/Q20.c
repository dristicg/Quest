#include <stdio.h>
int main() {
   int arr[]={80, 30, 70, 50, 20};
   int min=arr[0];
   int max=arr[0];
   int diff;
   int i;
   int len=sizeof(arr)/sizeof(arr[0]);
   for(int i=0;i<len;i++){
       if(min>arr[i]){
         min=arr[i];
       }
       if(max<arr[i]){
        max=arr[i];
       } 
       
   } 
    diff=max-min;    
    printf("%d",diff);
   
    return 0;
}