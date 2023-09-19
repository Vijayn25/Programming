#include <bits/stdc++.h>
using namespace std;

int main(){
   int num;
   cin>>num;
   int arr[num];
   for(int i=0;i<num;i++){
    cin>>arr[i];
   }
    int size = num;
    int count[size]={0};
    int sorted [size]={0};
    for(int i=0;i<size;i++){
        count[arr[i]]++;
    }
    for(int i=1;i<size;i++){
        count[i]=count[i]+count[i-1];
    }
    for(int i=size-1;i>=0;i--){
        sorted[count[arr[i]]-1]=arr[i];
        count[arr[i]]--;
    }
    for(int i=0;i<size;i++){
        cout<<sorted[i]<<" ";
    }
}
