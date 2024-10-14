#include <stdio.h>
int main() {
   int arr[]={3,5,3,8};
   int cnt1;
   int i;
   int len=sizeof(arr)/sizeof(arr[i]);
   for(i=0;i<len-1;i++){
       if(arr[i]<arr[i+1]){
           cnt1+=1;
       }
    if(cnt1==len-1){
        printf("true");
        }  
    else{
        printf("false");
    }
    return 0;
}