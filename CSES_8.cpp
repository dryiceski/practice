//Two Sets
//https://cses.fi/problemset/task/1092/


#include <iostream>
#include <vector>
#define ll long long

using namespace std;

int main(){

    ll n;
    cin>>n;
    if((n*(n+1))%4 == 0){
        cout<<"YES"<<"\n";
        vector<ll> set1;
        vector<ll> set2;
        ll sum = (n*(n+1))/4;
        for(auto i=n;i>0;i--){
            if(i<=sum){
                set1.emplace_back(i);
                sum-=i;
            }
            else{
                set2.emplace_back(i);
            }
        }
        cout<<set1.size()<<"\n";
        for(auto i:set1) cout<<i<<" ";
        cout<<"\n";
        cout<<set2.size()<<"\n";
        for(auto i:set2) cout<<i<<" ";
    }
    else{
        cout<<"NO";
    }

    return 0;
}