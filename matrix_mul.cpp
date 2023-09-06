#include <bits/stdc++.h>
using namespace std;

#define num 2
void print(int res[][num],int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}

int mul(int mat1[][num],int mat2[][num]){
    int reslut [num][num];
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            reslut[i][j]=mat1[i][j]*mat2[i][j];
        }
    }
    print(reslut,num);
    return 0;
}


int main(){
   // int num;
   // cin>>num;
    int mat1[num][num],mat2[num][num];
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            cin>>mat1[i][j];
        }
    }
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            cin>>mat2[i][j];
        }
    }
    mul(mat1,mat2);
}