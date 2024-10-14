// 13.
 #include <stdio.h>
int main() {
  int arr[]={1,2,3,4,5};
  int cnt=0;
  int len=sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<len;i++){
      if(arr[i]==3){
        cnt+=1;
      }
      }
   if(cnt>0){
      printf("true");
  }
  else{
      printf("false");
  }
    return 0;
}