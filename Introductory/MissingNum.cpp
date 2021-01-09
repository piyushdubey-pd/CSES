#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int n;cin>>n;
    vector<bool> x(n);
    while(n--){
        int t; cin>>t;
        x[t-1]=true;
    }
    cout<<(find(x.begin(),x.end(),false)-x.begin())+1<<endl;
}