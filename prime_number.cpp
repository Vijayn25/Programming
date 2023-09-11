#include<bits/stdc++.h>
using namespace std;

bool isprime(int num){
    if(num<0) return isprime(-num);
    if(num==0 || num==1)    return false;
    if(num==2 || num==3)    return  true;
    if(num%2==0 || num%3==0)    return false;
    for(int i=3;i<=sqrt(num) ;i+=2){
        if(num%i==0)    return false;
    }
    return true;
}


int main(){
    int num,flag=0;
    cin>>num;
    if(isprime(num)) cout<<"prime number";
    else cout<<"not a prime";
}