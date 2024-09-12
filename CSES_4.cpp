//Increasing Array
//https://cses.fi/problemset/task/1094


#define ll long long
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> ans;
    ll n,moves=0;
    cin>>n;
    while(n--){
        ll x;
        cin>>x;
        ans.emplace_back(x);
    }
    for(ll i=1;i<ans.size();i++){
        if(ans[i-1]>ans[i]){
            moves+=ans[i-1]-ans[i];
            ans[i]=ans[i-1];
        }
    }
    cout<<moves;
    return 0;
}