#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num; // to get size from the user 
    int arr[num]; // array declaration 
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
int minindex = 0;
    for(int i=0;i<=num-2;i++){
        minindex = i;
        for(int j = i+1;j<=num-1;j++){
            if(arr[j]<arr[minindex]){
                minindex = j;
            }
            if(minindex!=i){
                swap(arr[minindex],arr[i]);
            }
        }
    }
    for(int k=0;k<num;k++){
        cout<<arr[k]<<" ";
    }
}
