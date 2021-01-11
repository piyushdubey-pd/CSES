#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll n,sum=1;
    cin>>n;
    vector<ll> x(n);
    for(ll i=0;i<n;i++)
    cin>>x[i];
    sort(x.begin(),x.end());
    ll prev=x[0];
    for(int i=1;i<n;i++)
    if(prev!=x[i]){sum++;prev=x[i];}
    cout<<sum<<endl;
}