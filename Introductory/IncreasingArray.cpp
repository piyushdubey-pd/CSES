#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    ll n,sum=0,curr;
    cin>>n;
    ll prev;cin>>prev;
    n--;
    while(n--){
        cin>>curr;
        if(prev>curr)
        {sum+=(prev-curr);continue;}
        prev=curr;
    }
    cout<<sum<<endl;
}