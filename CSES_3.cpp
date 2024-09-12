//Repetitions
//https://cses.fi/problemset/task/1069


#define ll long long
#include<iostream>
#include<string>
using namespace std;
int main(){
    string dna;
    cin>>dna;
    ll m=0,n=dna.size();
    string chk="";
    for(ll i=0;i<n;i++)
    {
        if(chk==""){
            chk+=dna[i];
        }
        else if(dna[i]==chk[0]){
            chk+=dna[i];
        }
        else if(dna[i]!=chk[0]){
            if(chk.size()>m) m=chk.size();
            chk="";
            chk+=dna[i];
        }
    }
    if(m<chk.size()) m=chk.size();
    cout<<m;
    
    return 0;
}