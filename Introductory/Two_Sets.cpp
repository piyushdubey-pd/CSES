#include<bits/stdc++.h>
using ll=long long;
using namespace std;
int main(){
    ll n;
    cin>>n;
    if (((n*(n+1))/2)&1)
    cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        vector <ll> A;
        vector <ll> B;
        ll sum=(n*(n+1)/4);
        if (n&1){
            for(int i=n;i>=1;i--)
            {
                if(i<=sum)
                {
                    A.push_back(i);
                    sum=sum-i;
                }
                else
                    B.push_back(i);
            }
            reverse(A.begin(),A.end());
            reverse(B.begin(),B.end());
        }
        else{
            int i=1;
            while(i<n/2)
                (i&1)?A.push_back(i++):B.push_back(i++);
            B.push_back(n/2);
            for(i=(n/2)+1;i<=n;i++)
                (i&1)?B.push_back(i):A.push_back(i);
            }
        cout<<A.size()<<endl;
        for(ll i:A) cout<<i<<" "; cout<<endl;
        cout<<B.size()<<endl;
        for(ll i:B) cout<<i<<" "; cout<<endl;
        }
    }
