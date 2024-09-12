// Two Knights
//https://cses.fi/problemset/task/1072


#define ll long long
#include<iostream>


int main(){
    ll n;
    std::cin>>n;
    for(ll i=1;i<=n;i++){
        ll k=((i*i)*(i*i-1))/2-4*(i-2)*(i-1);
        std::cout<<k<<"\n";
    }
    return 0;
}