//Number Spiral
//https://cses.fi/problemset/task/1071


#include<iostream>
#define ll long long
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll x,y;
        cin>>y>>x;
        if (y>=x){
            if(!(y%2)){
                cout<<y*y-(x-1)<<"\n";
            }
            else{
                cout<<(y-1)*(y-1)+x<<"\n";
            }
        }
        else{
            if(!(x%2)){
                cout<<(x-1)*(x-1)+y<<"\n";
            }
            else{
                cout<<x*x-(y-1)<<"\n";
            }
        }
    }
    return 0;
}