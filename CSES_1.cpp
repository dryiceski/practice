//Weird Algorithm
//https://cses.fi/problemset/task/1068


#include <iostream>
using namespace std;
int main(){
    long long n;
    cin>>n;
    while (n--){
        if(!(n%2)) n/=2;
        else n=n*3+1;
        cout<<n<<" ";
    }
    return 0;
}
