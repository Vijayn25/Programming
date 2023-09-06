#include <bits/stdc++.h>
using namespace std;

bool CHpair(int arr[],int num,int find){
for(int i=0;i<num;i++){
        for(int j=i+1;j<num;j++){
            if(arr[i]+arr[j] == find){
                return 1;
            }
        }   
    }
    return 0;
}

int main(){
    int num,find;
    cin>>num;
    cin>>find;
    int arr[num],sum=0;
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    if(CHpair(arr,num,find))
    cout<<"yes";
    else
    cout<<"No";
}