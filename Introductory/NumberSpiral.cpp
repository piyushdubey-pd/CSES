#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll x,y;cin>>x>>y;
        ll m=max(x,y);
        ll n=min(x,y);
        ll z=m*m-(m-1);
        if(m&1)
        z+=(n==x)?(m-n):(n-m);
        else
        z+=(n==x)?(n-m):(m-n);
        cout<<z<<endl;
    }
}