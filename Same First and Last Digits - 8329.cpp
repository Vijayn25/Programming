#include <iostream.h>
#include <vector.h>
using namespace std;

int main()
{
    int num,c=0;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
        vector<int> newarr;
        int n = arr[i];
        while(n!=0){
        newarr.push_back(n%10);
        n/=10;
        }
        int len = newarr.size();
        if(newarr[0]==newarr[len-1]){
            cout<<arr[i]<<" ";
        }
        else{
            c++;
        }
    }
    if(c==num){
        cout<<"-1";
    }
}
