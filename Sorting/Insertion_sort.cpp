# include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr {63, 78, 12 , 11 , 6 ,7 , 45 , 9, 1};
    int size = arr.size();
    for(int i=0;i<size;i++){
        int j = i;
        while (j>0 && arr[j-1]>arr[j])
        {
            swap(arr[j-1],arr[j]);
        j--;
        }
        
    }
    for(auto i : arr){
        cout<<i<<" ";
    }
    
}
