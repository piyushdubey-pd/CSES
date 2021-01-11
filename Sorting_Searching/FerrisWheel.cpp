#include<bits/stdc++.h>
using ll=long long;
using namespace std;
int main(){
    ll n,x,sum=0;
    cin>>n>>x;
    vector<int> p(n);
    for(ll i=0;i<n;i++){
        cin>>p[i];
    }
    ll i=0,j=n-1;
    sort(p.begin(),p.end());
    while(i<=j)
    {
        if(p[i]+p[j]<=x)
        {sum++;i++;j--;}
        else{
            sum++;
            j--;
        }
    }
    cout<<sum<<endl;    
}