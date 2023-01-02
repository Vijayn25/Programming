#include <iostream>
using namespace std;
int main() {
  int num,count=0;
  cin>>num;
  int n = num;
  while(n!=0){
    n=n/10;
    count++;
  }
  n = num;
  int arr[count];
  int i=count-1;
  while(n!=0){
    arr[i]=n%10;
    n=n/10;
    i--;
  }
  for(int i=0;i<count;i++){
    for(int j=0;j<arr[i];j++){
      cout<<arr[i];
    }
  }
}
