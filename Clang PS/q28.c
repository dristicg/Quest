#include <stdio.h>
#include <string.h>

int  main() {
  int num1;
  int num2;
  
  printf("enter first no.:");
  scanf("%d",&num1);
  
  printf("enter second no.:");
  scanf("%d",&num2);
  
  if(num1>num2){
      printf("%d",num1);
  }
  else{
      printf("%d",num2);
  }
    return 0;
}