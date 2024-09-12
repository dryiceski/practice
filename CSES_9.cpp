//Bit Strings
//https://cses.fi/problemset/task/1617/



#include <iostream>
#include <cmath>
#define ll long long
using namespace std;
 
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w", stdout);
    #endif
    ll bitstrlen;
    cin>>bitstrlen;
    ll m=1000000007LL;
    ll ans=1;
    while(bitstrlen--){
        ans=((ans%m)*2)%m;
    }

  cout<<ans;
    
return 0;
}