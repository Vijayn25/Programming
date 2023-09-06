#include <bits/stdc++.h>
using namespace std;

void ndlargest(int arr[],int num){
    if(num<2){
        cout<<"invalid inputs";
    }
    int first,sec;
    sort(arr,arr+num);
    for(int i=num-2;i>=0;i--){
        if(arr[i]!=arr[num-1]){
            cout<<arr[i];
            return ;
        }
    }
    return ;
}

int main(){
    int num;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    ndlargest(arr,num);
    return 0;
}