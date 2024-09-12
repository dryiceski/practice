//Permutations
//https://cses.fi/problemset/task/1070


#define ll long long
#include<iostream>
#include<vector>
using namespace std;

int main(){
    ll n;
    cin>>n;
    if(n>3 || n==1){
        for(auto j=2;j<=n;j+=2){
            cout<<j<<" ";
        }
        for(auto i=1;i<=n;i+=2){
            cout<<i<<" ";
        }
    }
    else{
        cout<<"NO SOLUTION";
    }
    return 0;
}