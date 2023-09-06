#include <bits/stdc++.h>
using namespace std;

int main (){
    vector <pair<int,int>> vec;
    vec= {{0,1},{2,3},{2,4}};
    sort(vec.begin(),vec.end());
    std::cout<<vec[1].first<<" "<<vec[0].second<<endl;

    for(auto i : vec ){
        std::cout<<i.first<<" ";
    }
    
}