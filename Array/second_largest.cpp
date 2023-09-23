# include <bits/stdc++.h>
using namespace std;

int main(){
     int num;
     cin>>num;
     int arr[num];
     for(int i=0;i<num;i++){
        cin>>arr[i];
     }
     int first = arr[0];
     for(int i=0;i<num;i++){
        if(arr[i]>first){
            first = arr[i];
        }
     }
     int second = -1;
     for(int i=0;i<num;i++){
        if(second < arr[i] && arr[i] < first){
            second = arr[i];
        }

     }
     cout<<"Second largest "<<second;
}
