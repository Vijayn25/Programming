#include <stdio.h>

int main(void) {
  int num,odd=0,even=0;
  scanf("%d",&num);
  int arr[num];
  for(int i=0;i<num;i++){
    scanf("%d",&arr[i]);
    if(arr[i]%2==0){
      even++;
    }
    else{
      odd++;
    }
  }
  if(odd>even){
    for(int i=0;i<num;i++){
      if(arr[i]%2!=0){
        arr[i]=arr[i]+1;
      }
    }
    
  }
  else if(odd<even){
    for(int i=0;i<num;i++){
      if(arr[i]%2==0){
        arr[i]=arr[i]-1;
      }
    }
    
  }
   else if(odd==even){
    for(int i=0;i<num;i++){
      if(arr[i]%2==0){
        arr[i]=arr[i]-1;
      }
      else{
        arr[i]=arr[i]+1;
      }
    }
    
  }
  for(int i=0;i<num;i++){
    printf("%d ",arr[i]);
  }
  return 0;
}
