//Missing Number
//https://cses.fi/problemset/task/1083


#include <iostream>
#include <set>
using namespace std;
int main(){
    long long n,x;
    cin>>n;
    x=n-1;
    set<int> l;
    while (x--){
        long long c;
        cin>>c;
        l.insert(c);
    }
    long long k=1;
    for(auto i:l){
        if(k!=i) break;
        k++;
    }
    cout<<k;
    return 0;
}
