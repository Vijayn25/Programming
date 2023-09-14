#include <bits/stdc++.h>

using namespace std;

int max_element(int arr[],int num){
    int max = arr[0];
    for(int i=0;i<num;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}


int main(){
    int num;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    cout<<"the max element is "<<max_element(arr,num);
}

