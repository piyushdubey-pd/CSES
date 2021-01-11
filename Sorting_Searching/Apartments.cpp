#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    ll n,m,k,sum=0;
    cin>>n>>m>>k;
    vector<int> x(n);
    vector<int> y(m);
    for(ll i=0;i<n;i++)
    cin>>x[i];
    for(ll i=0;i<m;i++)
    cin>>y[i];
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    ll i=0,j=0;
    while(i<n && j<m){
        if (abs(x[i]-y[j])<=k){
            sum++;
            i++;
            j++;
        }
        else if(x[i]-y[j]<k)
        i++;
        else 
        j++;
    }
    cout<<sum<<endl;
}